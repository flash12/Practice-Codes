#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{int n;
float p,r,t,s,c;
clrscr();
printf("Enter Principle Value\t");
scanf("%f",&p);
printf("Enter Rate of Interest(in%)\t");
scanf("%f",&r);
printf("Enter Time Period(in years)\t");
scanf("%f",&t);
s=(p*r*t)/100;

printf("Simple Interest is\t%f",s);
printf("\nEnter the number of times amount has to be compunded\t");
scanf("%d",&n);
c=p*pow(1+(r/n),n*t);
printf("\ncompound interest is\t%f",c);
getch();
}




