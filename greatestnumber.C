#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
printf("enter values of a,b,c");
scanf("%d%d%d",&a,&b,&c);
if(a>b)
 if(b>c)
 printf("a is greatest");
 else
 printf("c is greatest");
else
if(b>c)
printf("b is greatest");
else
printf("c is greatest");
getch();
}