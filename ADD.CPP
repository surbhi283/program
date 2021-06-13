
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
int a=2,b=6;
int c=a+b;
clrscr();
textcolor(RED);
textbackground(4);
gotoxy(30,10);
delay(3000);
cprintf("%d",c);
printf("%d",c);

getch();
}