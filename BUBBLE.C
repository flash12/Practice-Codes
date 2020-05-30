#include<stdio.h>
#include<conio.h>
void bubble(int [],int);
void main()
{
  int a[10],s,i,n;
  clrscr();
  printf("Enter the no. of elements:");
  scanf("%d",&n);
  for(i=0;i<n;i++) {
  scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++){
  printf("%d ",a[i]);
  }
  bubble(a,n);
  printf("\n");
  for(i=0;i<n;i++)
  {
    printf("%d  ",a[i]);
  }
getch();
}
void bubble(int p[],int n)
{
  int i,j,tmp;
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(p[j]>p[j+1])
      {
	tmp=p[j];
	p[j]=p[j+1];
	p[j+1]=tmp;
      }
    }
  }
}

