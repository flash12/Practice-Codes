#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float area_t,area_c,a,b,c,r,s;
clrscr();
 printf("Enter the radius of circle = ");
 scanf("%f",&r);
 area_c=3.14*r*r;
 printf("Area of Circle = %f",area_c);
 printf("\n\nEnter sides of triangle ");
 printf("\nEnter side 1 = ");
 scanf("%f",&a);
 printf("Enter side 2 = ");
 scanf("%f",&b);
 printf("Enter side 3 = ");
 scanf("%f",&c);
 s=(a+b+c)/2;
 area_t=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("Area of Triangle = %f",area_t);
 getch();
}
