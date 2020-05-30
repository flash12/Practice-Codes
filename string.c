#include<stdio.h>
#include<conio.h>
void length()
{
 char ch[100];
 int i,len=0;
 clrscr();
 printf("Enter the string :");
 scanf("%s",&ch);

 for(i=0; ch[i] !='\0';i++)
 {
    len++;
 }
 printf("Length of String %s is: %d",ch,len);
getch();
}

void cat()
{
  char ch1[100],ch2[50];
  int i,j;
  clrscr();
  printf("Enter the string 1 :");
  scanf("%s",&ch1);
  printf("\nEnter the string 2 :");
  scanf("%s",&ch2);
  for(i=0; ch1[i] !='\0';i++);
  for(j=0; ch2[j] !='\0';i++,j++)
  {
    ch1[i]=ch2[j];
  }
  ch1[i] ='\0';
 printf("Concatenated String is  %s ",ch1);
}
void rev()
{
  char str[50],s[50];
  int i,j,end=0;
  clrscr();
  printf("Enter the string :");
  //gets(str);
  scanf("%s",&str);
  for(i=0; str[i] !='\0';i++);

  end=i-1;
  for(j=0;j<i;j++)
  {
    s[j]=str[end];
    end--;
  }
  s[j] ='\0';
  printf("The reverse string is : %s",s);
}

void copy()
{
 char ch1[50],ch2[50];
 int i;
 clrscr();
 printf("Enter the string :");
 scanf("%s",&ch1);
 for(i=0; ch1[i]!='\0';i++)
 {
   ch2[i]=ch1[i];
 }

 ch2[i] = '\0';
 printf("The copied string is  %s ",ch2);

}
void main()
{
  int n;
  char ch;
  clrscr();
  printf("Enter 'Y' for entering : ");
  scanf("%c",&ch);
  while(1)
  {
  printf("\t\t\nVarious String Operations\n");
  printf("\n\t 1. Press 1 for finding length \n");
  printf("\t 2. Press 2 for concatenate \n");
  printf("\t 3. Press 3 for reversing string \n");
  printf("\t 4. Press 4 for copying the string \n");
  printf("\t 5. Press 5 for exit from Menu");
  printf("\nEnter your choice :-");
  scanf("%d",&n);
  switch(n)
  {
    case 1:  length();
	     break;
    case 2:  cat();
	     break;
    case 3:  rev();
	     break;
    case 4:  copy();
	     break;
    case 5:  exit(0);
	     break;
    default : printf("Wrong Input !!!!");
  }
 }
getch();
}
