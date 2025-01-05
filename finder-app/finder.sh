#!/bin/sh

filedir=$1
searchstr=$2
if [ -z $filedir ]; then
  exit 1
fi
if [ -z $searchstr ]; then
  exit 1
fi
if ! [ -e $filedir ]; then
  exit 1
fi
X=$(find $filedir -type f | wc -l)

Y=$(grep -r $searchstr $filedir | wc -l)
echo The number of files are $X and the number of matching lines are $Y
