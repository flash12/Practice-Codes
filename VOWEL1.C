#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int b;
clrscr();
printf("enter a character");
scanf("%c",&a);
b=a;
if(65<=b&&b<=123)
{printf("its a  alphabat ");
if(a=='e'||a=='E'||a=='i'||a=='I'||a=='a'||a=='A'||a=='o'||a=='O'||a=='u'||a=='U')
printf("digit is a vowel");
else
printf("its a consonent");
}
else
printf("its a digit");
getch();

}
