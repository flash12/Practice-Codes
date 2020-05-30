  #include<stdio.h>
  #include<conio.h>
  void main()
  {
    int i,j,k,b;
    clrscr();
    for(i=1;i<=4;i++)
    {
	k=1;
	b=1;
	for(j=1;j<=7;j++)
	{
	 if(j>=5-i && j<=3+i && k)
	 {
	    printf("%d",b);
	    k=0;
	    j<4?b++:b--;
	 /*   if(j<4)
	      b++;
	    else
	      b--;  */
	  }
	  else
	  {
	    printf(" ");
	    k=1;
	  }
	 }
	 printf("\n");
      }

 getch();
 }
