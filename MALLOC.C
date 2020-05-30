#include<stdio.h>
#include<conio.h>
void main()
{
 int *ptr,n,sum=0;
 printf("Enter the size: ");
 scanf(&n);
 ptr=(int *)malloc(n*sizeof(int));
 if(ptr==null)
 {
  printf("Memory full");
 }
 for(i=0;i<n;i++)
 {
   scanf("%d",ptr+i)
   sum+= *(ptr+i);
 }
 printf("sum = ",sum);
 free(ptr);
 getch();
}