#include<stdio.h>
#include<conio.h>
void main()
{
char data;
clrscr();
scanf("%c",data);
if(data>='a' && data<='z' || data>='A' && data<='Z')
{
printf("Alphabet");
}
else 
{
printf("No");
}
getch();
}
