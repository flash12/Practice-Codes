#include<stdio.h>
#include<conio.h>

struct rec {
	int roll;
	char name[30];
	int marks;
	char sub[40];
}stu[2];

int main()
{
// rec stu[1];
 int i;
 //clrscr();
 for(i=0;i<2;i++)
 {
    printf("Enter record of student %d",i+1);
    printf("\nEnter the roll:");
    scanf("%d",&stu[i].roll);
    printf("Enter the name:");
    fflush(stdin);
//    scanf("%s",&stu[i].name);
    gets(stu[i].name);
 //   fflush(stdin);
    printf("Enter the marks:");
    scanf("%d",&stu[i].marks);
    printf("Enter the subject:");
    fflush(stdin);
    gets(stu[i].sub);
    //scanf("%s",&stu[i].sub);
 //   fflush(stdin);
    printf("\n");
 }
 for(i=0;i<2;i++)
 { //fflush(stdin);
   printf("Record of %s is\n",stu[i].name);
  // fflush(stdin);
   printf(" Roll: %d\t Subject: %s\t Marks: %d\n",stu[i].roll,stu[i].sub,stu[i].marks);
 }
 getch();
}

