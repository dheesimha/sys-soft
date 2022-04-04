#Script to extract date from ls command

p1=`ls -l|cut -d " " -f7`
p2=`ls -l|cut -d " " -f8` 

echo "$p1$p2"
