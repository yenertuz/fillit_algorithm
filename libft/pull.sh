#!/usr/bin/bash

cd ..
git clone https://github.com/yenertuz/ft001_gnl.git xx
rm -rRf libft
mv xx/libft .
rm -rRf xx
