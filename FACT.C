  #include<stdio.h>
  #include<conio.h>
  long fact(int n)
  {
    if(n>0)
      return (n*fact(n-1));
      else
      return 1;
  }
  void main()
  {
    int a;
    clrscr();
    printf("Enter the number");
    scanf("%d",&a);
    printf("The factorial of the number %d is %ld :",a,fact(a));
    getch();
  }