# Makefile.in generated by automake 1.15.1 from Makefile.am.
# src/Makefile.  Generated from Makefile.in by configure.

# Copyright (C) 1994-2017 Free Software Foundation, Inc.

# This Makefile.in is free software; the Free Software Foundation
# gives unlimited permission to copy and/or distribute it,
# with or without modifications, as long as this notice is preserved.

# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY, to the extent permitted by law; without
# even the implied warranty of MERCHANTABILITY or FITNESS FOR A
# PARTICULAR PURPOSE.




am__is_gnu_make = { \
  if test -z '$(MAKELEVEL)'; then \
    false; \
  elif test -n '$(MAKE_HOST)'; then \
    true; \
  elif test -n '$(MAKE_VERSION)' && test -n '$(CURDIR)'; then \
    true; \
  else \
    false; \
  fi; \
}
am__make_running_with_option = \
  case $${target_option-} in \
      ?) ;; \
      *) echo "am__make_running_with_option: internal error: invalid" \
              "target option '$${target_option-}' specified" >&2; \
         exit 1;; \
  esac; \
  has_opt=no; \
  sane_makeflags=$$MAKEFLAGS; \
  if $(am__is_gnu_make); then \
    sane_makeflags=$$MFLAGS; \
  else \
    case $$MAKEFLAGS in \
      *\\[\ \	]*) \
        bs=\\; \
        sane_makeflags=`printf '%s\n' "$$MAKEFLAGS" \
          | sed "s/$$bs$$bs[$$bs $$bs	]*//g"`;; \
    esac; \
  fi; \
  skip_next=no; \
  strip_trailopt () \
  { \
    flg=`printf '%s\n' "$$flg" | sed "s/$$1.*$$//"`; \
  }; \
  for flg in $$sane_makeflags; do \
    test $$skip_next = yes && { skip_next=no; continue; }; \
    case $$flg in \
      *=*|--*) continue;; \
        -*I) strip_trailopt 'I'; skip_next=yes;; \
      -*I?*) strip_trailopt 'I';; \
        -*O) strip_trailopt 'O'; skip_next=yes;; \
      -*O?*) strip_trailopt 'O';; \
        -*l) strip_trailopt 'l'; skip_next=yes;; \
      -*l?*) strip_trailopt 'l';; \
      -[dEDm]) skip_next=yes;; \
      -[JT]) skip_next=yes;; \
    esac; \
    case $$flg in \
      *$$target_option*) has_opt=yes; break;; \
    esac; \
  done; \
  test $$has_opt = yes
am__make_dryrun = (target_option=n; $(am__make_running_with_option))
am__make_keepgoing = (target_option=k; $(am__make_running_with_option))
pkgdatadir = $(datadir)/hddtemp
pkgincludedir = $(includedir)/hddtemp
pkglibdir = $(libdir)/hddtemp
pkglibexecdir = $(libexecdir)/hddtemp
am__cd = CDPATH="$${ZSH_VERSION+.}$(PATH_SEPARATOR)" && cd
install_sh_DATA = $(install_sh) -c -m 644
install_sh_PROGRAM = $(install_sh) -c
install_sh_SCRIPT = $(install_sh) -c
INSTALL_HEADER = $(INSTALL_DATA)
transform = $(program_transform_name)
NORMAL_INSTALL = :
PRE_INSTALL = :
POST_INSTALL = :
NORMAL_UNINSTALL = :
PRE_UNINSTALL = :
POST_UNINSTALL = :
build_triplet = x86_64-unknown-linux-gnu
host_triplet = arm-buildroot-linux-gnu
sbin_PROGRAMS = hddtemp$(EXEEXT)
subdir = src
ACLOCAL_M4 = $(top_srcdir)/aclocal.m4
am__aclocal_m4_deps = $(top_srcdir)/m4/codeset.m4 \
	$(top_srcdir)/m4/gettext.m4 $(top_srcdir)/m4/glibc2.m4 \
	$(top_srcdir)/m4/glibc21.m4 $(top_srcdir)/m4/iconv.m4 \
	$(top_srcdir)/m4/intdiv0.m4 $(top_srcdir)/m4/intmax.m4 \
	$(top_srcdir)/m4/inttypes-pri.m4 $(top_srcdir)/m4/inttypes.m4 \
	$(top_srcdir)/m4/inttypes_h.m4 $(top_srcdir)/m4/isc-posix.m4 \
	$(top_srcdir)/m4/lcmessage.m4 $(top_srcdir)/m4/lib-ld.m4 \
	$(top_srcdir)/m4/lib-link.m4 $(top_srcdir)/m4/lib-prefix.m4 \
	$(top_srcdir)/m4/longdouble.m4 $(top_srcdir)/m4/longlong.m4 \
	$(top_srcdir)/m4/nls.m4 $(top_srcdir)/m4/po.m4 \
	$(top_srcdir)/m4/printf-posix.m4 $(top_srcdir)/m4/progtest.m4 \
	$(top_srcdir)/m4/signed.m4 $(top_srcdir)/m4/size_max.m4 \
	$(top_srcdir)/m4/stdint_h.m4 $(top_srcdir)/m4/uintmax_t.m4 \
	$(top_srcdir)/m4/ulonglong.m4 $(top_srcdir)/m4/wchar_t.m4 \
	$(top_srcdir)/m4/wint_t.m4 $(top_srcdir)/m4/xsize.m4 \
	$(top_srcdir)/configure.in
am__configure_deps = $(am__aclocal_m4_deps) $(CONFIGURE_DEPENDENCIES) \
	$(ACLOCAL_M4)
DIST_COMMON = $(srcdir)/Makefile.am $(am__DIST_COMMON)
mkinstalldirs = $(SHELL) $(top_srcdir)/mkinstalldirs
CONFIG_HEADER = $(top_builddir)/config.h
CONFIG_CLEAN_FILES =
CONFIG_CLEAN_VPATH_FILES =
am__installdirs = "$(DESTDIR)$(sbindir)"
PROGRAMS = $(sbin_PROGRAMS)
am_hddtemp_OBJECTS = hddtemp-ata.$(OBJEXT) hddtemp-atacmds.$(OBJEXT) \
	hddtemp-daemon.$(OBJEXT) hddtemp-db.$(OBJEXT) \
	hddtemp-hddtemp.$(OBJEXT) hddtemp-sata.$(OBJEXT) \
	hddtemp-satacmds.$(OBJEXT) hddtemp-scsi.$(OBJEXT) \
	hddtemp-scsicmds.$(OBJEXT) hddtemp-backtrace.$(OBJEXT) \
	hddtemp-utf8.$(OBJEXT)
hddtemp_OBJECTS = $(am_hddtemp_OBJECTS)
hddtemp_DEPENDENCIES =
hddtemp_LINK = $(CCLD) $(hddtemp_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) \
	$(LDFLAGS) -o $@
AM_V_P = $(am__v_P_$(V))
am__v_P_ = $(am__v_P_$(AM_DEFAULT_VERBOSITY))
am__v_P_0 = false
am__v_P_1 = :
AM_V_GEN = $(am__v_GEN_$(V))
am__v_GEN_ = $(am__v_GEN_$(AM_DEFAULT_VERBOSITY))
am__v_GEN_0 = @echo "  GEN     " $@;
am__v_GEN_1 = 
AM_V_at = $(am__v_at_$(V))
am__v_at_ = $(am__v_at_$(AM_DEFAULT_VERBOSITY))
am__v_at_0 = @
am__v_at_1 = 
DEFAULT_INCLUDES = -I. -I$(top_builddir)
depcomp = $(SHELL) $(top_srcdir)/depcomp
am__depfiles_maybe = depfiles
am__mv = mv -f
AM_V_lt = $(am__v_lt_$(V))
am__v_lt_ = $(am__v_lt_$(AM_DEFAULT_VERBOSITY))
am__v_lt_0 = --silent
am__v_lt_1 = 
COMPILE = $(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) \
	$(CPPFLAGS) $(AM_CFLAGS) $(CFLAGS)
AM_V_CC = $(am__v_CC_$(V))
am__v_CC_ = $(am__v_CC_$(AM_DEFAULT_VERBOSITY))
am__v_CC_0 = @echo "  CC      " $@;
am__v_CC_1 = 
CCLD = $(CC)
LINK = $(CCLD) $(AM_CFLAGS) $(CFLAGS) $(AM_LDFLAGS) $(LDFLAGS) -o $@
AM_V_CCLD = $(am__v_CCLD_$(V))
am__v_CCLD_ = $(am__v_CCLD_$(AM_DEFAULT_VERBOSITY))
am__v_CCLD_0 = @echo "  CCLD    " $@;
am__v_CCLD_1 = 
SOURCES = $(hddtemp_SOURCES)
DIST_SOURCES = $(hddtemp_SOURCES)
am__can_run_installinfo = \
  case $$AM_UPDATE_INFO_DIR in \
    n|no|NO) false;; \
    *) (install-info --version) >/dev/null 2>&1;; \
  esac
am__tagged_files = $(HEADERS) $(SOURCES) $(TAGS_FILES) $(LISP)
# Read a list of newline-separated strings from the standard input,
# and print each of them once, without duplicates.  Input order is
# *not* preserved.
am__uniquify_input = $(AWK) '\
  BEGIN { nonempty = 0; } \
  { items[$$0] = 1; nonempty = 1; } \
  END { if (nonempty) { for (i in items) print i; }; } \
'
# Make sure the list of sources is unique.  This is necessary because,
# e.g., the same source file might be shared among _SOURCES variables
# for different programs/libraries.
am__define_uniq_tagged_files = \
  list='$(am__tagged_files)'; \
  unique=`for i in $$list; do \
    if test -f "$$i"; then echo $$i; else echo $(srcdir)/$$i; fi; \
  done | $(am__uniquify_input)`
ETAGS = etags
CTAGS = ctags
am__DIST_COMMON = $(srcdir)/Makefile.in $(top_srcdir)/depcomp \
	$(top_srcdir)/mkinstalldirs
DISTFILES = $(DIST_COMMON) $(DIST_SOURCES) $(TEXINFOS) $(EXTRA_DIST)
ACLOCAL = aclocal-1.15
ALLOCA = 
AMTAR = $${TAR-tar}
AM_DEFAULT_VERBOSITY = 1
AUTOCONF = autoconf
AUTOHEADER = autoheader
AUTOMAKE = automake-1.15
AWK = gawk
BUILD_INCLUDED_LIBINTL = yes
CATOBJEXT = .gmo
CC = arm-buildroot-linux-uclibcgnueabihf-gcc
CCDEPMODE = depmode=gcc3
CFLAGS = -g -O2 -Wall -W -Wcast-align
CPP = arm-buildroot-linux-uclibcgnueabihf-gcc -E
CPPFLAGS = 
CYGPATH_W = echo
DATADIRNAME = share
DEFS = -DLOCALEDIR=\"$(localedir)\" -DHAVE_CONFIG_H
DEPDIR = .deps
ECHO_C = 
ECHO_N = -n
ECHO_T = 
EGREP = /bin/grep -E
EXEEXT = 
GENCAT = gencat
GLIBC2 = yes
GLIBC21 = yes
GMSGFMT = /usr/bin/msgfmt
GREP = /bin/grep
HAVE_ASPRINTF = 1
HAVE_POSIX_PRINTF = 1
HAVE_SNPRINTF = 1
HAVE_WPRINTF = 0
INSTALL = /usr/bin/install -c
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_STRIP_PROGRAM = $(install_sh) -c -s
INSTOBJEXT = .mo
INTLBISON = bison
INTLLIBS = ${top_builddir}/intl/libintl.a 
INTLOBJS = $(GETTOBJS)
INTL_LIBTOOL_SUFFIX_PREFIX = 
INTL_MACOSX_LIBS = 
LDFLAGS = 
LIBICONV = 
LIBINTL = ${top_builddir}/intl/libintl.a 
LIBOBJS = 
LIBS = 
LTLIBICONV = 
LTLIBINTL = ${top_builddir}/intl/libintl.a 
LTLIBOBJS = 
MAKEINFO = makeinfo
MKDIR_P = /bin/mkdir -p
MKINSTALLDIRS = $(top_builddir)/./mkinstalldirs
MSGFMT = /usr/bin/msgfmt
MSGMERGE = /usr/bin/msgmerge
OBJEXT = o
PACKAGE = hddtemp
PACKAGE_BUGREPORT = 
PACKAGE_NAME = 
PACKAGE_STRING = 
PACKAGE_TARNAME = 
PACKAGE_URL = 
PACKAGE_VERSION = 
PATH_SEPARATOR = :
POSUB = po
RANLIB = ranlib
SET_MAKE = 
SHELL = /bin/sh
STRIP = strip
USE_INCLUDED_LIBINTL = yes
USE_NLS = yes
VERSION = 0.3-beta15
XGETTEXT = /usr/bin/xgettext
abs_builddir = /home/liyongli/SVN/hddtemp-0.3-beta15/src
abs_srcdir = /home/liyongli/SVN/hddtemp-0.3-beta15/src
abs_top_builddir = /home/liyongli/SVN/hddtemp-0.3-beta15
abs_top_srcdir = /home/liyongli/SVN/hddtemp-0.3-beta15
ac_ct_CC = 
am__include = include
am__leading_dot = .
am__quote = 
am__tar = $${TAR-tar} chof - "$$tardir"
am__untar = $${TAR-tar} xf -
bindir = ${exec_prefix}/bin
build = x86_64-unknown-linux-gnu
build_alias = 
build_cpu = x86_64
build_os = linux-gnu
build_vendor = unknown
builddir = .
datadir = ${datarootdir}
datarootdir = ${prefix}/share
docdir = ${datarootdir}/doc/${PACKAGE}
dvidir = ${docdir}
exec_prefix = /usr/local
host = arm-buildroot-linux-gnu
host_alias = arm-buildroot-linux
host_cpu = arm
host_os = linux-gnu
host_vendor = buildroot
htmldir = ${docdir}
includedir = ${prefix}/include
infodir = ${datarootdir}/info
install_sh = ${SHELL} /home/liyongli/SVN/hddtemp-0.3-beta15/install-sh
libdir = ${exec_prefix}/lib
libexecdir = ${exec_prefix}/libexec
localedir = $(datadir)/locale
localstatedir = ${prefix}/var
mandir = ${datarootdir}/man
mkdir_p = $(MKDIR_P)
oldincludedir = /usr/include
pdfdir = ${docdir}
prefix = /usr/local
program_transform_name = s,x,x,
psdir = ${docdir}
runstatedir = ${localstatedir}/run
sbindir = ${exec_prefix}/sbin
sharedstatedir = ${prefix}/com
srcdir = .
sysconfdir = ${prefix}/etc
target_alias = arm-buildroot-linux
top_build_prefix = ../
top_builddir = ..
top_srcdir = ..
CLEANFILES = *~
hddtemp_SOURCES = ata.c ata.h \
		  atacmds.c atacmds.h \
		  daemon.c daemon.h \
                  db.c db.h \
		  hddtemp.c hddtemp.h \
		  sata.c sata.h \
		  satacmds.c statcmds.h \
		  scsi.c scsi.h \
		  scsicmds.c scsicmds.h \
		  backtrace.c backtrace.h \
		  utf8.c utf8.h

hddtemp_CFLAGS = -Wall -W -rdynamic
#hddtemp_CFLAGS = -Wall -fomit-frame-pointer -rdynamic
hddtemp_LDADD = ${top_builddir}/intl/libintl.a ${top_builddir}/conv/libiconv.so
INCLUDES = -I. -I$(srcdir) -I.. -I../intl -I$(top_srcdir)/intl -I. -I$(srcdir) -I.. -I../conv -I$(top_srcdir)/conv
all: all-am

.SUFFIXES:
.SUFFIXES: .c .o .obj
$(srcdir)/Makefile.in:  $(srcdir)/Makefile.am  $(am__configure_deps)
	@for dep in $?; do \
	  case '$(am__configure_deps)' in \
	    *$$dep*) \
	      ( cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh ) \
	        && { if test -f $@; then exit 0; else break; fi; }; \
	      exit 1;; \
	  esac; \
	done; \
	echo ' cd $(top_srcdir) && $(AUTOMAKE) --foreign src/Makefile'; \
	$(am__cd) $(top_srcdir) && \
	  $(AUTOMAKE) --foreign src/Makefile
Makefile: $(srcdir)/Makefile.in $(top_builddir)/config.status
	@case '$?' in \
	  *config.status*) \
	    cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh;; \
	  *) \
	    echo ' cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe)'; \
	    cd $(top_builddir) && $(SHELL) ./config.status $(subdir)/$@ $(am__depfiles_maybe);; \
	esac;

$(top_builddir)/config.status: $(top_srcdir)/configure $(CONFIG_STATUS_DEPENDENCIES)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh

$(top_srcdir)/configure:  $(am__configure_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(ACLOCAL_M4):  $(am__aclocal_m4_deps)
	cd $(top_builddir) && $(MAKE) $(AM_MAKEFLAGS) am--refresh
$(am__aclocal_m4_deps):
install-sbinPROGRAMS: $(sbin_PROGRAMS)
	@$(NORMAL_INSTALL)
	@list='$(sbin_PROGRAMS)'; test -n "$(sbindir)" || list=; \
	if test -n "$$list"; then \
	  echo " $(MKDIR_P) '$(DESTDIR)$(sbindir)'"; \
	  $(MKDIR_P) "$(DESTDIR)$(sbindir)" || exit 1; \
	fi; \
	for p in $$list; do echo "$$p $$p"; done | \
	sed 's/$(EXEEXT)$$//' | \
	while read p p1; do if test -f $$p \
	  ; then echo "$$p"; echo "$$p"; else :; fi; \
	done | \
	sed -e 'p;s,.*/,,;n;h' \
	    -e 's|.*|.|' \
	    -e 'p;x;s,.*/,,;s/$(EXEEXT)$$//;$(transform);s/$$/$(EXEEXT)/' | \
	sed 'N;N;N;s,\n, ,g' | \
	$(AWK) 'BEGIN { files["."] = ""; dirs["."] = 1 } \
	  { d=$$3; if (dirs[d] != 1) { print "d", d; dirs[d] = 1 } \
	    if ($$2 == $$4) files[d] = files[d] " " $$1; \
	    else { print "f", $$3 "/" $$4, $$1; } } \
	  END { for (d in files) print "f", d, files[d] }' | \
	while read type dir files; do \
	    if test "$$dir" = .; then dir=; else dir=/$$dir; fi; \
	    test -z "$$files" || { \
	      echo " $(INSTALL_PROGRAM_ENV) $(INSTALL_PROGRAM) $$files '$(DESTDIR)$(sbindir)$$dir'"; \
	      $(INSTALL_PROGRAM_ENV) $(INSTALL_PROGRAM) $$files "$(DESTDIR)$(sbindir)$$dir" || exit $$?; \
	    } \
	; done

uninstall-sbinPROGRAMS:
	@$(NORMAL_UNINSTALL)
	@list='$(sbin_PROGRAMS)'; test -n "$(sbindir)" || list=; \
	files=`for p in $$list; do echo "$$p"; done | \
	  sed -e 'h;s,^.*/,,;s/$(EXEEXT)$$//;$(transform)' \
	      -e 's/$$/$(EXEEXT)/' \
	`; \
	test -n "$$list" || exit 0; \
	echo " ( cd '$(DESTDIR)$(sbindir)' && rm -f" $$files ")"; \
	cd "$(DESTDIR)$(sbindir)" && rm -f $$files

clean-sbinPROGRAMS:
	-test -z "$(sbin_PROGRAMS)" || rm -f $(sbin_PROGRAMS)

hddtemp$(EXEEXT): $(hddtemp_OBJECTS) $(hddtemp_DEPENDENCIES) $(EXTRA_hddtemp_DEPENDENCIES) 
	@rm -f hddtemp$(EXEEXT)
	$(AM_V_CCLD)$(hddtemp_LINK) $(hddtemp_OBJECTS) $(hddtemp_LDADD) $(LIBS)

mostlyclean-compile:
	-rm -f *.$(OBJEXT)

distclean-compile:
	-rm -f *.tab.c

include ./$(DEPDIR)/hddtemp-ata.Po
include ./$(DEPDIR)/hddtemp-atacmds.Po
include ./$(DEPDIR)/hddtemp-backtrace.Po
include ./$(DEPDIR)/hddtemp-daemon.Po
include ./$(DEPDIR)/hddtemp-db.Po
include ./$(DEPDIR)/hddtemp-hddtemp.Po
include ./$(DEPDIR)/hddtemp-sata.Po
include ./$(DEPDIR)/hddtemp-satacmds.Po
include ./$(DEPDIR)/hddtemp-scsi.Po
include ./$(DEPDIR)/hddtemp-scsicmds.Po
include ./$(DEPDIR)/hddtemp-utf8.Po

.c.o:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ $<
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ $<

.c.obj:
	$(AM_V_CC)$(COMPILE) -MT $@ -MD -MP -MF $(DEPDIR)/$*.Tpo -c -o $@ `$(CYGPATH_W) '$<'`
	$(AM_V_at)$(am__mv) $(DEPDIR)/$*.Tpo $(DEPDIR)/$*.Po
#	$(AM_V_CC)source='$<' object='$@' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(COMPILE) -c -o $@ `$(CYGPATH_W) '$<'`

hddtemp-ata.o: ata.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-ata.o -MD -MP -MF $(DEPDIR)/hddtemp-ata.Tpo -c -o hddtemp-ata.o `test -f 'ata.c' || echo '$(srcdir)/'`ata.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-ata.Tpo $(DEPDIR)/hddtemp-ata.Po
#	$(AM_V_CC)source='ata.c' object='hddtemp-ata.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-ata.o `test -f 'ata.c' || echo '$(srcdir)/'`ata.c

hddtemp-ata.obj: ata.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-ata.obj -MD -MP -MF $(DEPDIR)/hddtemp-ata.Tpo -c -o hddtemp-ata.obj `if test -f 'ata.c'; then $(CYGPATH_W) 'ata.c'; else $(CYGPATH_W) '$(srcdir)/ata.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-ata.Tpo $(DEPDIR)/hddtemp-ata.Po
#	$(AM_V_CC)source='ata.c' object='hddtemp-ata.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-ata.obj `if test -f 'ata.c'; then $(CYGPATH_W) 'ata.c'; else $(CYGPATH_W) '$(srcdir)/ata.c'; fi`

hddtemp-atacmds.o: atacmds.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-atacmds.o -MD -MP -MF $(DEPDIR)/hddtemp-atacmds.Tpo -c -o hddtemp-atacmds.o `test -f 'atacmds.c' || echo '$(srcdir)/'`atacmds.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-atacmds.Tpo $(DEPDIR)/hddtemp-atacmds.Po
#	$(AM_V_CC)source='atacmds.c' object='hddtemp-atacmds.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-atacmds.o `test -f 'atacmds.c' || echo '$(srcdir)/'`atacmds.c

hddtemp-atacmds.obj: atacmds.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-atacmds.obj -MD -MP -MF $(DEPDIR)/hddtemp-atacmds.Tpo -c -o hddtemp-atacmds.obj `if test -f 'atacmds.c'; then $(CYGPATH_W) 'atacmds.c'; else $(CYGPATH_W) '$(srcdir)/atacmds.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-atacmds.Tpo $(DEPDIR)/hddtemp-atacmds.Po
#	$(AM_V_CC)source='atacmds.c' object='hddtemp-atacmds.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-atacmds.obj `if test -f 'atacmds.c'; then $(CYGPATH_W) 'atacmds.c'; else $(CYGPATH_W) '$(srcdir)/atacmds.c'; fi`

hddtemp-daemon.o: daemon.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-daemon.o -MD -MP -MF $(DEPDIR)/hddtemp-daemon.Tpo -c -o hddtemp-daemon.o `test -f 'daemon.c' || echo '$(srcdir)/'`daemon.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-daemon.Tpo $(DEPDIR)/hddtemp-daemon.Po
#	$(AM_V_CC)source='daemon.c' object='hddtemp-daemon.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-daemon.o `test -f 'daemon.c' || echo '$(srcdir)/'`daemon.c

hddtemp-daemon.obj: daemon.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-daemon.obj -MD -MP -MF $(DEPDIR)/hddtemp-daemon.Tpo -c -o hddtemp-daemon.obj `if test -f 'daemon.c'; then $(CYGPATH_W) 'daemon.c'; else $(CYGPATH_W) '$(srcdir)/daemon.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-daemon.Tpo $(DEPDIR)/hddtemp-daemon.Po
#	$(AM_V_CC)source='daemon.c' object='hddtemp-daemon.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-daemon.obj `if test -f 'daemon.c'; then $(CYGPATH_W) 'daemon.c'; else $(CYGPATH_W) '$(srcdir)/daemon.c'; fi`

hddtemp-db.o: db.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-db.o -MD -MP -MF $(DEPDIR)/hddtemp-db.Tpo -c -o hddtemp-db.o `test -f 'db.c' || echo '$(srcdir)/'`db.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-db.Tpo $(DEPDIR)/hddtemp-db.Po
#	$(AM_V_CC)source='db.c' object='hddtemp-db.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-db.o `test -f 'db.c' || echo '$(srcdir)/'`db.c

hddtemp-db.obj: db.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-db.obj -MD -MP -MF $(DEPDIR)/hddtemp-db.Tpo -c -o hddtemp-db.obj `if test -f 'db.c'; then $(CYGPATH_W) 'db.c'; else $(CYGPATH_W) '$(srcdir)/db.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-db.Tpo $(DEPDIR)/hddtemp-db.Po
#	$(AM_V_CC)source='db.c' object='hddtemp-db.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-db.obj `if test -f 'db.c'; then $(CYGPATH_W) 'db.c'; else $(CYGPATH_W) '$(srcdir)/db.c'; fi`

hddtemp-hddtemp.o: hddtemp.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-hddtemp.o -MD -MP -MF $(DEPDIR)/hddtemp-hddtemp.Tpo -c -o hddtemp-hddtemp.o `test -f 'hddtemp.c' || echo '$(srcdir)/'`hddtemp.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-hddtemp.Tpo $(DEPDIR)/hddtemp-hddtemp.Po
#	$(AM_V_CC)source='hddtemp.c' object='hddtemp-hddtemp.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-hddtemp.o `test -f 'hddtemp.c' || echo '$(srcdir)/'`hddtemp.c

hddtemp-hddtemp.obj: hddtemp.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-hddtemp.obj -MD -MP -MF $(DEPDIR)/hddtemp-hddtemp.Tpo -c -o hddtemp-hddtemp.obj `if test -f 'hddtemp.c'; then $(CYGPATH_W) 'hddtemp.c'; else $(CYGPATH_W) '$(srcdir)/hddtemp.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-hddtemp.Tpo $(DEPDIR)/hddtemp-hddtemp.Po
#	$(AM_V_CC)source='hddtemp.c' object='hddtemp-hddtemp.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-hddtemp.obj `if test -f 'hddtemp.c'; then $(CYGPATH_W) 'hddtemp.c'; else $(CYGPATH_W) '$(srcdir)/hddtemp.c'; fi`

hddtemp-sata.o: sata.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-sata.o -MD -MP -MF $(DEPDIR)/hddtemp-sata.Tpo -c -o hddtemp-sata.o `test -f 'sata.c' || echo '$(srcdir)/'`sata.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-sata.Tpo $(DEPDIR)/hddtemp-sata.Po
#	$(AM_V_CC)source='sata.c' object='hddtemp-sata.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-sata.o `test -f 'sata.c' || echo '$(srcdir)/'`sata.c

hddtemp-sata.obj: sata.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-sata.obj -MD -MP -MF $(DEPDIR)/hddtemp-sata.Tpo -c -o hddtemp-sata.obj `if test -f 'sata.c'; then $(CYGPATH_W) 'sata.c'; else $(CYGPATH_W) '$(srcdir)/sata.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-sata.Tpo $(DEPDIR)/hddtemp-sata.Po
#	$(AM_V_CC)source='sata.c' object='hddtemp-sata.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-sata.obj `if test -f 'sata.c'; then $(CYGPATH_W) 'sata.c'; else $(CYGPATH_W) '$(srcdir)/sata.c'; fi`

hddtemp-satacmds.o: satacmds.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-satacmds.o -MD -MP -MF $(DEPDIR)/hddtemp-satacmds.Tpo -c -o hddtemp-satacmds.o `test -f 'satacmds.c' || echo '$(srcdir)/'`satacmds.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-satacmds.Tpo $(DEPDIR)/hddtemp-satacmds.Po
#	$(AM_V_CC)source='satacmds.c' object='hddtemp-satacmds.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-satacmds.o `test -f 'satacmds.c' || echo '$(srcdir)/'`satacmds.c

hddtemp-satacmds.obj: satacmds.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-satacmds.obj -MD -MP -MF $(DEPDIR)/hddtemp-satacmds.Tpo -c -o hddtemp-satacmds.obj `if test -f 'satacmds.c'; then $(CYGPATH_W) 'satacmds.c'; else $(CYGPATH_W) '$(srcdir)/satacmds.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-satacmds.Tpo $(DEPDIR)/hddtemp-satacmds.Po
#	$(AM_V_CC)source='satacmds.c' object='hddtemp-satacmds.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-satacmds.obj `if test -f 'satacmds.c'; then $(CYGPATH_W) 'satacmds.c'; else $(CYGPATH_W) '$(srcdir)/satacmds.c'; fi`

hddtemp-scsi.o: scsi.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-scsi.o -MD -MP -MF $(DEPDIR)/hddtemp-scsi.Tpo -c -o hddtemp-scsi.o `test -f 'scsi.c' || echo '$(srcdir)/'`scsi.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-scsi.Tpo $(DEPDIR)/hddtemp-scsi.Po
#	$(AM_V_CC)source='scsi.c' object='hddtemp-scsi.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-scsi.o `test -f 'scsi.c' || echo '$(srcdir)/'`scsi.c

hddtemp-scsi.obj: scsi.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-scsi.obj -MD -MP -MF $(DEPDIR)/hddtemp-scsi.Tpo -c -o hddtemp-scsi.obj `if test -f 'scsi.c'; then $(CYGPATH_W) 'scsi.c'; else $(CYGPATH_W) '$(srcdir)/scsi.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-scsi.Tpo $(DEPDIR)/hddtemp-scsi.Po
#	$(AM_V_CC)source='scsi.c' object='hddtemp-scsi.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-scsi.obj `if test -f 'scsi.c'; then $(CYGPATH_W) 'scsi.c'; else $(CYGPATH_W) '$(srcdir)/scsi.c'; fi`

hddtemp-scsicmds.o: scsicmds.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-scsicmds.o -MD -MP -MF $(DEPDIR)/hddtemp-scsicmds.Tpo -c -o hddtemp-scsicmds.o `test -f 'scsicmds.c' || echo '$(srcdir)/'`scsicmds.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-scsicmds.Tpo $(DEPDIR)/hddtemp-scsicmds.Po
#	$(AM_V_CC)source='scsicmds.c' object='hddtemp-scsicmds.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-scsicmds.o `test -f 'scsicmds.c' || echo '$(srcdir)/'`scsicmds.c

hddtemp-scsicmds.obj: scsicmds.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-scsicmds.obj -MD -MP -MF $(DEPDIR)/hddtemp-scsicmds.Tpo -c -o hddtemp-scsicmds.obj `if test -f 'scsicmds.c'; then $(CYGPATH_W) 'scsicmds.c'; else $(CYGPATH_W) '$(srcdir)/scsicmds.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-scsicmds.Tpo $(DEPDIR)/hddtemp-scsicmds.Po
#	$(AM_V_CC)source='scsicmds.c' object='hddtemp-scsicmds.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-scsicmds.obj `if test -f 'scsicmds.c'; then $(CYGPATH_W) 'scsicmds.c'; else $(CYGPATH_W) '$(srcdir)/scsicmds.c'; fi`

hddtemp-backtrace.o: backtrace.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-backtrace.o -MD -MP -MF $(DEPDIR)/hddtemp-backtrace.Tpo -c -o hddtemp-backtrace.o `test -f 'backtrace.c' || echo '$(srcdir)/'`backtrace.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-backtrace.Tpo $(DEPDIR)/hddtemp-backtrace.Po
#	$(AM_V_CC)source='backtrace.c' object='hddtemp-backtrace.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-backtrace.o `test -f 'backtrace.c' || echo '$(srcdir)/'`backtrace.c

hddtemp-backtrace.obj: backtrace.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-backtrace.obj -MD -MP -MF $(DEPDIR)/hddtemp-backtrace.Tpo -c -o hddtemp-backtrace.obj `if test -f 'backtrace.c'; then $(CYGPATH_W) 'backtrace.c'; else $(CYGPATH_W) '$(srcdir)/backtrace.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-backtrace.Tpo $(DEPDIR)/hddtemp-backtrace.Po
#	$(AM_V_CC)source='backtrace.c' object='hddtemp-backtrace.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-backtrace.obj `if test -f 'backtrace.c'; then $(CYGPATH_W) 'backtrace.c'; else $(CYGPATH_W) '$(srcdir)/backtrace.c'; fi`

hddtemp-utf8.o: utf8.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-utf8.o -MD -MP -MF $(DEPDIR)/hddtemp-utf8.Tpo -c -o hddtemp-utf8.o `test -f 'utf8.c' || echo '$(srcdir)/'`utf8.c
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-utf8.Tpo $(DEPDIR)/hddtemp-utf8.Po
#	$(AM_V_CC)source='utf8.c' object='hddtemp-utf8.o' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-utf8.o `test -f 'utf8.c' || echo '$(srcdir)/'`utf8.c

hddtemp-utf8.obj: utf8.c
	$(AM_V_CC)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -MT hddtemp-utf8.obj -MD -MP -MF $(DEPDIR)/hddtemp-utf8.Tpo -c -o hddtemp-utf8.obj `if test -f 'utf8.c'; then $(CYGPATH_W) 'utf8.c'; else $(CYGPATH_W) '$(srcdir)/utf8.c'; fi`
	$(AM_V_at)$(am__mv) $(DEPDIR)/hddtemp-utf8.Tpo $(DEPDIR)/hddtemp-utf8.Po
#	$(AM_V_CC)source='utf8.c' object='hddtemp-utf8.obj' libtool=no \
#	DEPDIR=$(DEPDIR) $(CCDEPMODE) $(depcomp) \
#	$(AM_V_CC_no)$(CC) $(DEFS) $(DEFAULT_INCLUDES) $(INCLUDES) $(AM_CPPFLAGS) $(CPPFLAGS) $(hddtemp_CFLAGS) $(CFLAGS) -c -o hddtemp-utf8.obj `if test -f 'utf8.c'; then $(CYGPATH_W) 'utf8.c'; else $(CYGPATH_W) '$(srcdir)/utf8.c'; fi`

ID: $(am__tagged_files)
	$(am__define_uniq_tagged_files); mkid -fID $$unique
tags: tags-am
TAGS: tags

tags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	set x; \
	here=`pwd`; \
	$(am__define_uniq_tagged_files); \
	shift; \
	if test -z "$(ETAGS_ARGS)$$*$$unique"; then :; else \
	  test -n "$$unique" || unique=$$empty_fix; \
	  if test $$# -gt 0; then \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      "$$@" $$unique; \
	  else \
	    $(ETAGS) $(ETAGSFLAGS) $(AM_ETAGSFLAGS) $(ETAGS_ARGS) \
	      $$unique; \
	  fi; \
	fi
ctags: ctags-am

CTAGS: ctags
ctags-am: $(TAGS_DEPENDENCIES) $(am__tagged_files)
	$(am__define_uniq_tagged_files); \
	test -z "$(CTAGS_ARGS)$$unique" \
	  || $(CTAGS) $(CTAGSFLAGS) $(AM_CTAGSFLAGS) $(CTAGS_ARGS) \
	     $$unique

GTAGS:
	here=`$(am__cd) $(top_builddir) && pwd` \
	  && $(am__cd) $(top_srcdir) \
	  && gtags -i $(GTAGS_ARGS) "$$here"
cscopelist: cscopelist-am

cscopelist-am: $(am__tagged_files)
	list='$(am__tagged_files)'; \
	case "$(srcdir)" in \
	  [\\/]* | ?:[\\/]*) sdir="$(srcdir)" ;; \
	  *) sdir=$(subdir)/$(srcdir) ;; \
	esac; \
	for i in $$list; do \
	  if test -f "$$i"; then \
	    echo "$(subdir)/$$i"; \
	  else \
	    echo "$$sdir/$$i"; \
	  fi; \
	done >> $(top_builddir)/cscope.files

distclean-tags:
	-rm -f TAGS ID GTAGS GRTAGS GSYMS GPATH tags

distdir: $(DISTFILES)
	@srcdirstrip=`echo "$(srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	topsrcdirstrip=`echo "$(top_srcdir)" | sed 's/[].[^$$\\*]/\\\\&/g'`; \
	list='$(DISTFILES)'; \
	  dist_files=`for file in $$list; do echo $$file; done | \
	  sed -e "s|^$$srcdirstrip/||;t" \
	      -e "s|^$$topsrcdirstrip/|$(top_builddir)/|;t"`; \
	case $$dist_files in \
	  */*) $(MKDIR_P) `echo "$$dist_files" | \
			   sed '/\//!d;s|^|$(distdir)/|;s,/[^/]*$$,,' | \
			   sort -u` ;; \
	esac; \
	for file in $$dist_files; do \
	  if test -f $$file || test -d $$file; then d=.; else d=$(srcdir); fi; \
	  if test -d $$d/$$file; then \
	    dir=`echo "/$$file" | sed -e 's,/[^/]*$$,,'`; \
	    if test -d "$(distdir)/$$file"; then \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    if test -d $(srcdir)/$$file && test $$d != $(srcdir); then \
	      cp -fpR $(srcdir)/$$file "$(distdir)$$dir" || exit 1; \
	      find "$(distdir)/$$file" -type d ! -perm -700 -exec chmod u+rwx {} \;; \
	    fi; \
	    cp -fpR $$d/$$file "$(distdir)$$dir" || exit 1; \
	  else \
	    test -f "$(distdir)/$$file" \
	    || cp -p $$d/$$file "$(distdir)/$$file" \
	    || exit 1; \
	  fi; \
	done
check-am: all-am
check: check-am
all-am: Makefile $(PROGRAMS)
installdirs:
	for dir in "$(DESTDIR)$(sbindir)"; do \
	  test -z "$$dir" || $(MKDIR_P) "$$dir"; \
	done
install: install-am
install-exec: install-exec-am
install-data: install-data-am
uninstall: uninstall-am

install-am: all-am
	@$(MAKE) $(AM_MAKEFLAGS) install-exec-am install-data-am

installcheck: installcheck-am
install-strip:
	if test -z '$(STRIP)'; then \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	      install; \
	else \
	  $(MAKE) $(AM_MAKEFLAGS) INSTALL_PROGRAM="$(INSTALL_STRIP_PROGRAM)" \
	    install_sh_PROGRAM="$(INSTALL_STRIP_PROGRAM)" INSTALL_STRIP_FLAG=-s \
	    "INSTALL_PROGRAM_ENV=STRIPPROG='$(STRIP)'" install; \
	fi
mostlyclean-generic:

clean-generic:
	-test -z "$(CLEANFILES)" || rm -f $(CLEANFILES)

distclean-generic:
	-test -z "$(CONFIG_CLEAN_FILES)" || rm -f $(CONFIG_CLEAN_FILES)
	-test . = "$(srcdir)" || test -z "$(CONFIG_CLEAN_VPATH_FILES)" || rm -f $(CONFIG_CLEAN_VPATH_FILES)

maintainer-clean-generic:
	@echo "This command is intended for maintainers to use"
	@echo "it deletes files that may require special tools to rebuild."
clean: clean-am

clean-am: clean-generic clean-sbinPROGRAMS mostlyclean-am

distclean: distclean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
distclean-am: clean-am distclean-compile distclean-generic \
	distclean-tags

dvi: dvi-am

dvi-am:

html: html-am

html-am:

info: info-am

info-am:

install-data-am:

install-dvi: install-dvi-am

install-dvi-am:

install-exec-am: install-sbinPROGRAMS

install-html: install-html-am

install-html-am:

install-info: install-info-am

install-info-am:

install-man:

install-pdf: install-pdf-am

install-pdf-am:

install-ps: install-ps-am

install-ps-am:

installcheck-am:

maintainer-clean: maintainer-clean-am
	-rm -rf ./$(DEPDIR)
	-rm -f Makefile
maintainer-clean-am: distclean-am maintainer-clean-generic

mostlyclean: mostlyclean-am

mostlyclean-am: mostlyclean-compile mostlyclean-generic

pdf: pdf-am

pdf-am:

ps: ps-am

ps-am:

uninstall-am: uninstall-sbinPROGRAMS

.MAKE: install-am install-strip

.PHONY: CTAGS GTAGS TAGS all all-am check check-am clean clean-generic \
	clean-sbinPROGRAMS cscopelist-am ctags ctags-am distclean \
	distclean-compile distclean-generic distclean-tags distdir dvi \
	dvi-am html html-am info info-am install install-am \
	install-data install-data-am install-dvi install-dvi-am \
	install-exec install-exec-am install-html install-html-am \
	install-info install-info-am install-man install-pdf \
	install-pdf-am install-ps install-ps-am install-sbinPROGRAMS \
	install-strip installcheck installcheck-am installdirs \
	maintainer-clean maintainer-clean-generic mostlyclean \
	mostlyclean-compile mostlyclean-generic pdf pdf-am ps ps-am \
	tags tags-am uninstall uninstall-am uninstall-sbinPROGRAMS

.PRECIOUS: Makefile


# Tell versions [3.59,3.63) of GNU make to not export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
