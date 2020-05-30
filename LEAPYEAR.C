#include<stdio.h>
#include<conio.h>
int main()
{
 int year;
 //clrscr();
 printf("Enter any Year ");
 scanf("%d",&year);
 if(year%400==0)
  printf("It is leap Year ");
 else if(year%100==0)
  printf("It is not leap year ");
  else if (year%4==0)
  printf("It is leap year ");
 else
  printf("It is not leap year ");
 getch();
 return 0;
}





