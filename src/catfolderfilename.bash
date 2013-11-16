#! /bin/bash

if [[ "x$1" == "x" ]]; then
	echo "usage: rename path";
fi

f_result=$$.txt

find $1 -type f > $f_result

while read line; do
	l_no=${line#./}
	l_dir=${l_no%/*}/
	#echo $l_no $l_dir; exit
	l_newname=$(echo $l_no | sed 's/\//_/g')
	#echo $l_newname; exit
	l_newfile=$l_dir$l_newname
	#echo $l_newfile; exit
	mv "$line" "$l_newfile"
done < $f_result

rm -f $f_result


