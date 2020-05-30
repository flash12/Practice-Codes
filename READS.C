#include<stdio.h>
#include<conio.h>

void main()
{
  FILE *fp;
  char ch;
  clrscr();
  fp=fopen("app.txt","w+");
  printf("Enter into file ");
  while((ch=getchar())!=EOF)
  {
    fputc(ch,fp);
  }
  printf("Reading data from file..");
  while((ch=fgetc(fp))!=EOF)
  {
    printf("\n%c",ch);
  }
  fclose(fp);
  getch();
}