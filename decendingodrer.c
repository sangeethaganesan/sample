#include<stdio.h>
#include<conio.h>
void main()
{
int num[30];
int i,j,n,a;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d"&num[i]);
}
for(i=0;i<n;++i)
{
for(j=i+1;j<n;++j)
{
if(num[i]<num[j])
{
a=num[i];
num[i]=num[j];
num[j];
}
}
}
for(i=0;i<n;++i)
{
printf("%d\n",num[i]);
}
getch();
}
