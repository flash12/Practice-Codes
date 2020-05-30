#include<stdio.h>
#include<conio.h>
enum week {S,M,T,W,Th,F,Sa};
void main()
{
 enum week today;
 clrscr();
 today=W;
 printf("%d ",today);
 getch();
}