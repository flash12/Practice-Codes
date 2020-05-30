#include<stdio.h>
#include<conio.h>
void call(int&,int&);
int main()
{
 int i,j;
 printf("Enter 2 numbers: ");
 scanf("%d%d",&i,&j);
 call(i,j);
 printf("\n%d %d",i,j);
 getch();
}

void call(int &x,int&y)
{
  int tmp;
  tmp=x;
  x=y;
  y=tmp;
  printf("\n %d   %d",x,y);
}

