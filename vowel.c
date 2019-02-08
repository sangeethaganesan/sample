#include<stdio.h>
#include<conio.h>
void main()
{
char data;
clrscr();
scanf("%c",&data);
if(data=='a'||data=='e'||data=='i'||data=='o'||data=='u')
{
printf("vowel");
}
else if(data=='!'||data=='@'||data=='#'||data=='%'||data=='&'||data=='*')
{
printf("invalid");
}
else
{
printf("constant");
}
getch();
}
