#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
}*head=NULL;

void create()
{
	int ch;
	do
	{
		struct node* new1, *t;
		new1=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value of the new code: ");
		scanf("%d", &new1->data);
		new1->next=NULL;
		if(head==NULL)
		{
			head=new1;
			t=new1;
		}
		else
		{
			t->next=new1;
			t=new1;
		}
		printf("\nDo you want to continue? if yes(press 1) for No(press any no.):");
		fflush(stdin);
		scanf("%d",&ch);	
	}
	while(ch==1);
}
void show()
{
	struct node* new1;
	printf("\nEnter linked list is look like: ");
	new1=head;
	while(new1!=NULL)
	{
		printf("%d | ",new1->data);
		new1=new1->next;
	}
	printf("NULL");
}
void printlist(struct node* head)
{
	struct node* temp =head;
	while(temp!=NULL)
	printf("%d",temp->data);
	temp=temp->next;
}
void main()
{
	int ch;
	//clrscr();
	while(1)
	{
		printf("\n 1. create");
		printf("\n Press 0 at exit");
		printf("\n Enter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			show();
			break;
			default:printf("Exit");
			exit(0);
		}
	}
}

