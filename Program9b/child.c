#include<stdio.h>

int main()
{
int ch,rv;
char cmd[10];

rv  =fork();

if(rv== 0)
{
do
{
printf("\n Enter new command\n");
scanf("%s",cmd);
system(cmd);
printf("\n 1:continue\n 0:Exit\n");
scanf("%d",&ch);
}
while(ch!=0);;
}

else
{
wait(0);
printf("\n Child terminated\n");

}

return 0;

}
