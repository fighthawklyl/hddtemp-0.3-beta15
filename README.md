# hddtemp-0.3-beta15
## 编译libiconv库
./configure --host=arm-buildroot-linux --target=arm-buildroot-linux CC=arm-buildroot-linux-uclibcgnueabihf-gcc --enable-static --enable-shared

## 将库放入hddtemp源码目录
修改configure文件中hddtemp.db文件的地址
db_path=\"/mnt/mtd/Config/hddtemp.db\"

使用以下配置交叉编译
./configure --host=arm-buildroot-linux  --target=arm-buildroot-linux CC=arm-buildroot-linux-uclibcgnueabihf-gcc 

修改src目录下makefile添加libiconv.so链接
hddtemp_LDADD = ${top_builddir}/intl/libintl.a ${top_builddir}/conv/libiconv.so
INCLUDES = -I. -I$(srcdir) -I.. -I../intl -I$(top_srcdir)/intl -I. -I$(srcdir) -I.. -I../conv -I$(top_srcdir)/conv

去除src/hddtemp.c中的degree相关东西和src/Makefile中am_hddtemp_OBJECTS参数中的hddtemp-utf8.$(OBJEXT) 后可以不依赖libiconv.so
degree = degree_sign();
