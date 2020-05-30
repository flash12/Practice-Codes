#include <stdio.h>
#include<stdlib.h>

void main()
{
 FILE *f1 , *f2;
 char file[200],c;
 f1 = fopen("a.txt","r");
 if(f1 == NULL)
 {
   printf("No");
   exit(0);
 }
 f2 = fopen("b.txt","w");
 printf("Enter the statement");
 gets(file);
 fprintf(f2,"%s",file);

 if(f2 == NULL)
 {
   printf("No");
 }
 c=fgetc(f1);
 while(c!= EOF)
 {
   fputc(c,f2);
   c= fgetc(f1);
 }
 printf("Contents Copied");
 fclose(f2);
 fclose(f2);
 getch();
}




//printf("")
