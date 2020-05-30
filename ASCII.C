#include<stdio.h>
#include<conio.h>
void main()
{
 int i;
 char ch;
 printf("Enter integer = ");
 scanf("%d",&i);
 ch=i;
 printf("ASCII value of %d is %c",i,ch);
 getch();
 clrscr();
}