#include<stdio.h>
#include<conio.h>
void main()
{
 int num,c,j,i=1;
 clrscr();
 scanf("%d",&num);
 while(i<=num)
 {
    c=0;
    j=2;
    while(j<=i/2)
    {
       if(i%j==0)
       {
	  c++;
	  break;
       }
      j++;
     }
    if(c==0 && i!=1)
    {
      printf("%d ",i," ");
    }
  i++;
 }
 getch();
}
