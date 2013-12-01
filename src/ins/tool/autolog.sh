#! /bin/bash

if [ ! -f "$1" -o ! -f "$2" ]; then
	echo 'usage: ./autolog.sh log bin'
	exit 1
fi


logfile=$1
exefile=$2
file1=$1.log1
file2=$1.log2


sed -e 's/^.*\(LJC[EX]0x[0-f]\+\).*$/\1/' $logfile > $file1

if [ -f $file2 ]; then
	echo "rm old log file"
	rm $file2
fi


while read line; do
	
	prompt=${line:0:4}	
	if [[ ( "${prompt}" == "LJCE" ) || ( "${prompt}" == "LJCX" ) ]]; then
		address=${line#LJC[EX]};
		echo ${prompt}:$(addr2line -e ${exefile} ${address} -f)
		echo ${prompt}:$(addr2line -e ${exefile} ${address} -f) >> $file2
	else
		echo $line;
		echo $line >> $file2;
	fi		

done < $file1
