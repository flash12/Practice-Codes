  #include<stdio.h>
  #include<math.h>

  void main()
  {
  int a,b,c;
  float d,r,q;
  clrscr();
  printf("enter coefficient of x^2 ");
  scanf("%d",&a);
  printf("enter the coefficient of x");
  scanf("%d",&b);
  printf("enter the coefficient");
  scanf("%d",&c);
  d=b*b-(4*a*c);
  if(d>0)
 {
  printf("roots are real and distinct");
  r=(-b+sqrt(d))/2*a;
  q=(-b-sqrt(d))/2*a;
  printf("first root is:;%f",r);
  printf("second root is::%f",q);
  }
  else if(d<0)
  printf("roots are imaginary");
  else
  printf("roots are real and equal");
  {
  r=(-b+sqrt(d))/2*a;
  printf("root are::%f%f",r,r);
  }
  getch();
  }
