#include<stdio.h>
#include<conio.h>
void main()
{
 int n,a,r,sum;
 clrscr();
 printf("Enter ht value :");
 scanf("%f %f",&a,&r,&n) ;
 sum=a*(1-pow(r,n))/(1-r);
 printf("The sum is : %f",sum) ;
 getch();
}
