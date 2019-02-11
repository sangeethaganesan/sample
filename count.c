#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int g;
clrscr();
scanf("%d",&g);
printf("%d",count(g));
getch();
}
int count(int n)
{
if(n==0)
return 0;
return 1+count(n/10);
}
