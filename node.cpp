#include<iostream>
#include<conio.h>
using namespace std;
struct Node
{
	int data;
	Node * next;	
};
Node * head ;
void Insert(int data,int n)
{
	Node * temp1= new Node;
	temp1->data=data;
	temp1->next=NULL;
	if(n==1)
	temp1->next=head;
	head=temp1;
	return;
	Node * temp2=head;
	for(int i=0;i<n-2;i++)
	{
		temp2=temp2->next;
	}
	temp1->next=temp2->next;
	temp2->next=temp1;
	
}
void Print()
{
	Node *temp=head;
	cout<<"The list is : ";
	while(temp!=NULL)
	{
		cout<< temp->data<<"\t";
		temp=temp-> next;
	}
	cout<<"\n";
	

}
 
int main()
{
	head=NULL;
	Insert(5,1);
	Insert(7,2);
	Insert(9,3);
	
	Insert(11,4);
	Insert(13,5);
	Insert(15,6);
	Insert(17,7);
	Insert(19,8);
	Print();
	getch();
}


