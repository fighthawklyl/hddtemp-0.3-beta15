/^# Packages using this file: / {
  s/# Packages using this file://
  ta
  :a
  s/ hddtemp / hddtemp /
  tb
  s/ $/ hddtemp /
  :b
  s/^/# Packages using this file:/
}
