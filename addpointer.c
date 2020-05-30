#include <stdio.h>
#include <conio.h>
void main()
{
   float *p,*q,f,sec,sum;
   clrscr();
   p=&f;
   q=&sec;
   printf("Enter two numbers:");
   scanf("%d%d",&f,&sec);
   sum = *p + *q;
   printf("The sum are: %d",sum);
getch();
}

