#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b;
 printf("Enter value of a = ");
 scanf("%d",&a);
 printf("Enter value of b = ");
 scanf("%d",&b);
 printf("\nValue of a before swapping is = %d",a);
 printf("\nValue of b before swapping is = %d",b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\n\nValue of a after swapping is = %d",a);
 printf("\nValue of b after swapping is = %d",b);
 getch();
 clrscr();
}