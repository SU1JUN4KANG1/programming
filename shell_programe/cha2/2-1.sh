#!/bin/bash
#
#this is a script for 
#1.ouput homedirectory
#2.ouput the terminal type using
#3.output all the severice which in runlevel-3


echo "my homedirectory :"
echo $HOME

echo "\n the terminal type i used"
echo $TERM


echo "there are in  the runlevel 3 which is : "
ls /etc/rc3.d/* 




