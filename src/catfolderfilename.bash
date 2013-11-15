#! /bin/bash

IFS=:
declare -a arr1
declare -a arr2
declare -a arr3
declare -a arr4

d_work=$1
f_path="1.txt"
f_new_name="2.txt"
f_new_file="3.txt"
f_old_file="4.txt"

#echo $d_work

# old path

find $d_work -type f | sed  -e 's/\(\..*\/\).\+/\1/' > $f_path

while read line
do
    arr1=("${arr1[@]}" $line)
done < $f_path

#echo ${arr1[*]}

 
# new name
find $d_work -type f | sed  -e 's/\.\/\(.*\)/\1/' -e 's/\//_/g'  > $f_new_name



while read line
do
    arr2=("${arr2[@]}" $line)
done < $f_new_name

#echo ${arr2[*]}


# cat p-ath and name


rm -f $f_new_file

len=${#arr2[*]}
for ((i=0; i < len; i++)); do
	echo -n ${arr1[i]}
	echo ${arr2[i]}; 
done >> $f_new_file



# old file

find $d_work -type f > $f_old_file

while read line
do
    arr3=("${arr3[@]}" $line)
done < $f_old_file


# move file
while read line
do
    arr4=("${arr4[@]}" $line)
done < $f_new_file

for ((i=0; i < len; i++)); do
	mv "${arr3[i]}"  "${arr4[i]}" 
done 







