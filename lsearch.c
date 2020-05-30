#include<stdio.h>
#include<conio.h>
void lsearch(int [],int,int);
void main()
{
  int a[10],s,i,n;
//  clrscr();
  printf("Enter the no. of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++) {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
  printf("%d ",a[i]);
  }
  printf("Enter the element to be searched for:");
  scanf("%d",&s);
  lsearch(a,n,s);
  getch();
}

void lsearch(int p[],int n,int s)
{
   int i;
   for(i=0;i<n;i++) {
   if(p[i]==s){
   printf("Element Found At %d",i+1);
   break;
   }
}
  if(n==i)
  printf("Element Not found");
}


