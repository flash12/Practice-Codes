#include <stdio.h>
#include <conio.h>

void main()
{
   int a[5]={1,2,3,4,5};
   int i;
//   clrscr();
   int *p=&a[0];
   clrscr();
   for(i=0;i<5;i++)
     printf("%d\t",*(p+i));
     printf("\n");
   for(i=0;i<5;i++)
     printf("%d at %u ",*(p+i),(p+i));
   getch();
   }
