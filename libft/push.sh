#!usr/bin/bash

rm -rRf ft001_gnl
rm -rRf xx
git clone https://github.com/yenertuz/ft001_gnl.git xx
cd xx
rm -rRf inc src *.*
cp -R ../inc .
cp -R ../src .
cp -R ../*.* .
git add .
git commit -m "m"
git push
cd ..
rm -rRf xx
