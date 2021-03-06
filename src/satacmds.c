/*
 * Copyright (C) 2002  Emmanuel VARAGNAT <hddtemp@guzu.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */

// Include file generated by ./configure
#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

// Gettext includes
#if ENABLE_NLS
#include <libintl.h>
#define _(String) gettext (String)
#else
#define _(String) (String)
#endif

// Standard includes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <scsi/sg.h>
#include <linux/hdreg.h>
#include <netinet/in.h>

// Application specific includes
#include "satacmds.h"
#include "scsicmds.h"

#ifndef ATA_16
/* Values for T10/04-262r7 */
#define		ATA_16			0x85      /* 16-byte pass-thru */
#endif

int sata_pass_thru(int device, unsigned char *cmd, unsigned char *buffer) {
  unsigned char cdb[16];
  unsigned char sense[32];
  int dxfer_direction;
  int ret;
  
  memset(cdb, 0, sizeof(cdb));
  cdb[0] = ATA_16;
  if (cmd[3]) {
    cdb[1] = (4 << 1); /* PIO Data-in */
    cdb[2] = 0x2e;     /* no off.line, cc, read from dev, lock count in sector count field */
    dxfer_direction = SG_DXFER_FROM_DEV;
  } else {
    cdb[1] = (3 << 1); /* Non-data */	  
    cdb[2] = 0x20;     /* cc */
    dxfer_direction = SG_DXFER_NONE;
  }
  cdb[4] = cmd[2];
  if (cmd[0] == WIN_SMART) {
    cdb[6] = cmd[3];
    cdb[8] = cmd[1];
    cdb[10] = 0x4f;
    cdb[12] = 0xc2;
  }
  else
    cdb[6] = cmd[1];
  cdb[14] = cmd[0];

  ret = scsi_SG_IO(device, cdb, sizeof(cdb), buffer, cmd[3] * 512, sense, sizeof(sense), dxfer_direction);
 
  /* Verify SATA magics */
  if (sense[0] != 0x72 || sense[7] != 0x0e || sense[9] != 0x0e || sense[10] != 0x00)
    return 1;		  
  else 
    return ret;
}

void sata_fixstring(unsigned char *s, int bytecount)
{
  unsigned char *p;
  unsigned char *end;

  p = s;
  end = &s[bytecount & ~1]; /* bytecount must be even */

  /* convert from big-endian to host byte order */
  for (p = end ; p != s;) {
    unsigned short *pp = (unsigned short *) (p -= 2);
    *pp = ntohs(*pp);
  }

  /* strip leading blanks */
  while (s != end && *s == ' ')
    ++s;
  /* compress internal blanks and strip trailing blanks */
  while (s != end && *s) {
    if (*s++ != ' ' || (s != end && *s && *s != ' '))
      *p++ = *(s-1);
  }
  /* wipe out trailing garbage */
  while (p != end)
    *p++ = '\0';
}

int sata_enable_smart(int device) {
  unsigned char cmd[4] = { WIN_SMART, 0, SMART_ENABLE, 0 };

  return sata_pass_thru(device, cmd, NULL);
}

int sata_get_smart_values(int device, unsigned char* buff) {
  unsigned char cmd[4] = { WIN_SMART, 0, SMART_READ_VALUES, 1 };

  return sata_pass_thru(device, cmd, buff);
}

