#include<stdio.h>
#include<conio.h>
void main()
{
int num,i,fla=1;
clrscr();
scanf("%d",&num);
for(i=2;i<=num/2;i++)
{
if(num%i==0)
flag=0;
break;
}
if(flag==1)
printf("yes");
else
printf("no");
getch();
}
