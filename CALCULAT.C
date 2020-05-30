#include<stdio.h>
#include<conio.h>
#include<process.h>
void main()
{
 int choice,a,b,c;
 char ans;
 clrscr();
 printf("\n\t\tCALCULATOR ");
 printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Divide ");
 do
 {
  printf("\n\n Enter your choice  ");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1: printf("Enter two numbers\n ");
	   scanf("%d%d",&a,&b);
	   c=a+b;
	   printf("Sum of two number is %d ",a);
	   break;
   case 2: printf("Enter first number ");
	   scanf("%d",&a);
	   printf("Enter second number ");
	   scanf("%d",&b);
	   c=a-b;
	   printf("%d - %d is %d ",a,b,c);
	   break;
   case 3: printf("Enter two numbers\n ");
	   scanf("%d%d",&a,&b);
	   c=a*b;
	   printf("Product of two number is %d ",c);
	   break;
   case 4: printf("Enter numerator ");
	   scanf("%d",&a);
	   printf("Enter denominator ");
	   scanf("%d",&b);
	   c=a/b;
	   printf("%d / %d is %d",a,b,c);
	   break;
   case 5: exit(0);
  default: printf("Wrong input ");
  }
 printf(" Want to enter more Y or N");
 scanf("%c",&ans);
 }while(ans=='Y'||ans=='y');
 getch();
}
