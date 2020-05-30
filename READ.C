#include<stdio.h>
#include<conio.h>

struct rec {
	int roll;
	char name[30];
	int marks;
	char sub[40];
}stu[2];

void main()
{
 FILE *fp;
// rec stu[1];
 int i;
 clrscr();
 fp=fopen("emps.dat","rb");
/*for(i=0;i<1;i++)
 {
    printf("Enter record of student");
    printf("\nEnter the roll:");
    scanf("%d",&stu.roll);
    printf("Enter the name:");
    fflush(stdin);
//    scanf("%s",&stu[i].name);
    gets(stu.name);
 //   fflush(stdin);
    printf("Enter the marks:");
    scanf("%d",&stu.marks);
    printf("+Enter the subject:");
    fflush(stdin);
    gets(stu.sub);
    fprintf(fp,"%d %s %d %s",stu.roll,stu.name,stu.marks,stu.sub);
    //scanf("%s",&stu[i].sub);
 //   fflush(stdin);
    printf("Details Are Printed in the file..");
    printf("\n");

 }
 rewind(fp);        */

 if(fp==NULL)
 printf("File Not Found...");
 else {
 for(i=0;i<2;i++)
 {
// fread(&stu,sizeof(stu),1,fp);
 fscanf(fp,"%d %s %d %s",&stu[i].roll,&stu[i].name,&stu[i].marks,&stu[i].sub);
 printf("Details of Employee Are...");
 printf("\n%d %s %d %s",stu[i].roll,stu[i].name,stu[i].marks,stu[i].sub);
 }
}
 fclose(fp);
/* for(i=0;i<2;i++)
 { //fflush(stdin);
   printf("Record of %s is\n",stu[i].name);
  // fflush(stdin);
   printf(" Roll: %d\t Subject: %s\t Marks: %d\n",stu[i].roll,stu[i].sub,stu[i].marks);
 } */
 getch();
}