#include<stdio.h>
#include<conio.h>
/*  */
long int factorial(int);
void main()
{
int num;
long int result;
clrscr();
printf("Enter the number :");
scanf("%d",&num);
if(num<0)
{
   printf("Factorial of negative no. is not possible ::");
}
else
{
   result=factorial(num);
}
printf("\n The factorial of %d is %ld",num,result);
getch();
}

long int factorial(int num)
{
if (num==1 || num==0)
{
   return 1;
}
else
{
  return (num*factorial(num-1));
}
}
