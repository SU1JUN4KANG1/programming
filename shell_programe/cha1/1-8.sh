#!/bin/bash 

var=`echo $PATH|sed "s/:/ /g"`
for list in $var;
do
ls -lR $list|grep -v '^d'
done





