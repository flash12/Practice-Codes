#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,temp;
 printf("Enter value of a = ");
 scanf("%d",&a);
 printf("Enter value of b = ");
 scanf("%d",&b);
 printf("\nValue of a before swapping is = %d",a);
 printf("\nValue of b before swapping is = %d",b);
 temp=a;
 a=b;
 b=temp;
 printf("\n\nValue of a after swapping is = %d",a);
 printf("\nValue of b after swapping is = %d",b);
 getch();
 clrscr();
}