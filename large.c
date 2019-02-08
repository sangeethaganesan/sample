#include<stdio.h>
#include<conio.h>
void main()
{
int a[3];
int i,j,n,t;
clrscr();
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(j=i+1;J<=n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("%d",a[n]);
getch();
}
