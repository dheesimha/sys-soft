#Program to extract the day field from date
p1=`date |cut -d " " -f1`
echo "$p1"
