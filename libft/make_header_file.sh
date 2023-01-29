#!/bin/bash
# chmod +x make_header_file.sh
# ./make_header_file.sh

libname=libft.h
libnameup=$(echo $libname | tr [:lower:] [:upper:] | tr '.' '_')
> $libname
echo "#ifndef $libnameup" >> $libname
echo "#define $libnameup" >> $libname
for item in $(find *.c); do grep header $item -A1 | grep -v header >> $libname; done
echo "#endif" >> $libname
