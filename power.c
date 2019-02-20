#include<stdio.h>
#include<conio.h>
void main();
{
int base,exp,result;
clrscr();
scanf("%d",&base);
scanf("%d\n",&exp);
while(exp!=0)
{
result*=base;
}
printf("%d\n",result);
getch();
}
