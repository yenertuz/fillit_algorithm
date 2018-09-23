#!usr/bin/bash

git clone https://github.com/yenertuz/ft001_gnl.git
cd ft001_gnl
rm -rRf *.a *.sh inc src
cp -R ../inc .
cp -R ../src .
cp -R ../*.* .
eval "git add .; git commit -m \"m\"; git push"
cd ..
rm -rRf ft001_gnl.git
