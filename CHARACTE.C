#include<stdio.h>
#include<conio.h>
void main()
{
 char c;
 int islowervowel,isuppervowel;
 clrscr();
 printf("Enter any character to check if it is vowel or consonant ");
 scanf("%c",&c);
 if((c>=65&&c<=90)||(c>=97&&c<=122))
 {
  islowervowel=(c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
  isuppervowel=(c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
  if(islowervowel||isuppervowel)
   printf("Entered character is vowel ");
  else
   printf("Entered character is consonant ");
 }
 else if(c>=48&&c<=57)
  printf(" Entered character is number ");
 else
  printf(" Entered character is special character ");
 getch();
}
