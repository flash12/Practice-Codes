#include<stdio.h>
#include<conio.h>
void add()
{
  int a[10][10],b[10][10],c[10][10];
  int i,j,m,n,p,q;
  printf("Enter the no. of rows and columns of Matrix A : ");
  scanf("%d %d",&m,&n);
  printf("Enter the no. of rows and columns of Matrix B : ");
  scanf("%d %d",&p,&q);
  if(m==p && n==q)
    printf("Matrix can be Added");
  else
  {  printf("\nMatrix Cannot be Added");
     exit(0);
  }
  printf("\nEnter Matrix A :");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nMatrix A : ");
  for(i=0;i<m;i++)
  {  printf("\n");
    for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
  }
  printf("\nEnter Matrix B :");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
  }
  printf("\nMatrix B : ");
  for(i=0;i<p;i++)
  { printf("\n");
    for(j=0;j<q;j++)
     printf("%d ",b[i][j]);
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
	c[i][j]=a[i][j]+b[i][j];
  }
  printf("\n\n\t The Sum Of Two Matrix is : \n");
  for(i=0;i<m;i++)
  { printf("\n");
    for(j=0;j<n;j++)
    printf("%d ",c[i][j]);
  }
}

void subtract()
{
  int a[10][10],b[10][10],c[10][10];
  int i,j,m,n,p,q;
  printf("Enter the no. of rows and columns of Matrix A : ");
  scanf("%d %d",&m,&n);
  printf("Enter the no. of rows and columns of Matrix B : ");
  scanf("%d %d",&p,&q);
  if(m==p && n==q)
    printf("Matrix can be Added");
  else
  {  printf("\nMatrix Cannot be Added");
     exit(0);
  }
  printf("\nEnter Matrix A :");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nMatrix A : ");
  for(i=0;i<m;i++)
  {  printf("\n");
    for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
  }
  printf("\nEnter Matrix B :");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
  }
  printf("\nMatrix B : ");
  for(i=0;i<p;i++)
  { printf("\n");
    for(j=0;j<q;j++)
     printf("%d ",b[i][j]);
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
	c[i][j]=a[i][j]-b[i][j];
  }
  printf("\n\n\t The Sum Of Two Matrix is : \n");
  for(i=0;i<m;i++)
  { printf("\n");
    for(j=0;j<n;j++)
    printf("%d ",c[i][j]);
  }
}

void upp()
{
  int a[10][10],b[10][10],c[10][10];
  int i,j,m,n,p,q;
  printf("Enter the no. of rows and columns of Matrix A : ");
  scanf("%d %d",&m,&n);
   printf("\nEnter Matrix A :");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nMatrix A : ");
  for(i=0;i<m;i++)
  {  printf("\n");
    for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
  }
  printf("\nThe Lower Triangular Matrix is \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
       if(i>=j)
       printf("%d ",a[i][j]);
       else
       printf(" ");
    }
    printf("\n");
  }
}

void low()
{
  int a[10][10],b[10][10],c[10][10];
  int i,j,m,n,p,q;
  printf("Enter the no. of rows and columns of Matrix A : ");
  scanf("%d %d",&m,&n);
   printf("\nEnter Matrix A :");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nMatrix A : ");
  for(i=0;i<m;i++)
  {  printf("\n");
    for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
  }
  printf("\nThe Lower Triangular Matrix is \n");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
       if(i<=j)
       printf("%d ",a[i][j]);
       else
       printf(" ");
    }
    printf("\n");
  }
}


void transpose()
{
  int a[10][10],b[10][10],c[10][10];
  int i,j,m,n,p,q;
  printf("Enter the no. of rows and columns of Matrix A : ");
  scanf("%d %d",&m,&n);
   printf("\nEnter Matrix A :");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nMatrix A : ");
  for(i=0;i<m;i++)
  {  printf("\n");
    for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
      b[i][j]=a[j][i];
  }
  printf("\nTranspose of the Matrix A is :\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    printf("%d ",b[i][j]);
    printf("\n");
  }
}

void multiply()
{
  int a[10][10],b[10][10],c[10][10];
  int i,j,m,n,p,q,k;
  printf("Enter the no. of rows and columns of Matrix A : ");
  scanf("%d %d",&m,&n);
  printf("Enter the no. of rows and columns of Matrix B : ");
  scanf("%d %d",&p,&q);
  if(n==p)
  {
  printf("\nEnter Matrix A :");
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nMatrix A : ");
  for(i=0;i<m;i++)
  {  printf("\n");
    for(j=0;j<n;j++)
     printf("%d ",a[i][j]);
  }
  printf("\nEnter Matrix B :");
  for(i=0;i<p;i++)
  {
    for(j=0;j<q;j++)
    scanf("%d",&b[i][j]);
  }
  printf("\nMatrix B : ");
  for(i=0;i<p;i++)
  { printf("\n");
    for(j=0;j<q;j++)
     printf("%d ",b[i][j]);
  }
  printf("\nProduct of Two Matrixes are :\n");
  for(i=0;i<m;i++)
  { printf("\n");
    for(j=0;j<q;j++)
    {
      c[i][j]=0;
      for(k=0;k<n;k++)
      c[i][j]=c[i][j]+a[i][k]*b[k][j];
      printf("%d ",c[i][j]);
    }
  }
 }
 else
 printf("\n The Matrix are not compatible for multiplication :");
}
void main()
{
  int n;
  char ch;
  clrscr();
  printf("Enter 'Y' for entering : ");
  scanf("%c",&ch);
  while(ch=='Y'|| ch=='y')
  {
  printf("\t\t\nVarious Operations Of Matrixes\n");
  printf("\n\t 1. Press 1 for Addition \n");
  printf("\t 2. Press 2 for Subtraction \n");
  printf("\t 3. Press 3 for Multiplication \n");
  printf("\t 4. Press 4 for Transpose of Matrix \n");
  printf("\t 5. Press 5 for Lowerhalf elements of matrix\n");
  printf("\t 6. Press 6 for Upperhalf elements of matrix\n");
  printf("\t 7. Press 7 for exit from Menu");
  printf("\nEnter your choice :-");
  scanf("%d",&n);
  switch(n)
  {
    case 1:  add();
	     break;
    case 2:  subtract();
	     break;
    case 3:  multiply();
	     break;
    case 4:  transpose();
	     break;
    case 5:  upp();
	     break;
    case 6:  low();
	     break;
    case 7:  exit(0);
	     break;
    default : printf("Wrong Input !!!!");
  }
    printf("\n\t\tDo you want to continue(y/n)?? ");
    scanf("%c",&ch);
 }
getch();
}
