#include<stdio.h>
#include<conio.h>
void main()
{
 int num,i=1,c=0;
 clrscr();
 printf("Enter the Number :");
 scanf("%d",&num);
 while(i<=num)
 {
   if(num%i==0)
   {
      c++;
   }
   i++;
 }
 if(c==2)
 {
   printf("The number is prime: ");
 }
 else
 printf("The number is not prime:");
getch();
}