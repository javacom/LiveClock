#!/bin/sh
if [ $# -lt 1 ]
then
  echo "usage : $0 *.deb"
  exit 0
else
  DEBNAMES=$@
fi
for DEBNAME in $DEBNAMES
do
if [ -f "$DEBNAME" ]
then
md5str=`md5sum $DEBNAME | awk '{print $1;}'`
sizestr=`ls -l $DEBNAME | awk '{print $5;}'`
echo "Filename: ./$DEBNAME"
echo "Size: $sizestr"
echo "MD5sum: $md5str"
echo
fi
done
