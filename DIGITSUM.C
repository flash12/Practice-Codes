#include<stdio.h>
#include<conio.h>
void main()
{
int j,d,s=0;
clrscr();
printf("Enter a number:");
scanf("%d",&j);
while(j>0)
{
d=j%10;
s+=d;
j=j/10;
}
printf("Sum of digits are :%d",s);
getch();
}
