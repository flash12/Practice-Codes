#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,g;
 printf("Enter the value of a ");
 scanf("%d",&a);
 printf("Enter the value of b ");
 scanf("%d",&b);
 printf("Enter the value of c ");
 scanf("%d",&c);
 g=a>b?(a>c?a:c):(b>c?b:c);
 printf("\nGreatest of the three numbers entered is = %d",g);
 getch();
 clrscr();
}
