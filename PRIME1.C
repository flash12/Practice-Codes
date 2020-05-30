#include<stdio.h>
#include<conio.h>
void main()
{
int i,a,b=0;
clrscr();
printf("\n Enter a digit");
scanf("%d",&a);
for(i=2;i<a-1;i++)
{
if(a%i==0)
b++;
}
if(b==0)
printf("THe number is prime number");
else
printf("number isnt prime ");
getch();
}