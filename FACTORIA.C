#include<stdio.h>
void main()
{
   int n;
   long fact=1;
   clrscr();
   printf("Enter the number");
   scanf("%d",&n);
   while(n>0)
   {
     fact=fact*n;
     n--;
   }
   printf("The factorial of the number is %ld",fact);
 getch();
}