#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int ms;
void create();
void insert_at_beginning();
void insert_at_end();
void insert_at_middle();
void reverse();
void show();
struct node
{
	int data;
	struct node*next;
}*head=NULL;

void create()
{
	char ch;
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
		scanf("%d",&ch);	
	}
	while(ch==1);
}

void insert_at_beginning()
{
	struct node *new1;
	new1=(struct node*)malloc(sizeof(struct node));
	printf("\n Enter the data of new node to be inserted");
	scanf("%d",new1->data);
	new1->next=NULL;
	if(head==NULL)
	head=new1;
	else{
		new1->next=head;
		head=new1;
	}
}
void insert_at_end()
{
	struct node *new1, *t;
	new1=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the data of new node to be inserted");
	scanf("%d",new1->data);
	new1->next=NULL;
	if(head==NULL)
		head=new1;
	else{
		struct node *t = head;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=new1;
	}
}
void insert_at_middle()
{
	struct node *new1,*temp,*t;
	int pos,i;
	printf("\nEnter the position where you wanted struct new node");
	scanf("%d",&pos);
	temp=head;
	for(i=0;i<pos-1;i++)
	{
		temp=temp->next;
	}
	t=temp->next;
	temp->next=new1;
	new1->next=t;
}
void reverse(struct node** head_ref)
{
	struct node* prev=NULL;
	struct node* current= *head_ref;
	struct node* next=NULL;
	while(current!=NULL)
	{
		next = current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head_ref=prev;
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
	do{
		printf("\n 1. create");
		printf("\n 2. Enter at beginning");
		printf("\n 3. insert at end");
		printf("\n 4. insert at middle");
		printf("\n 5. reverse");
		printf("\n Press 0 at exit");
		printf("\n Enter your choice ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			show();
			break;
			case 2:insert_at_beginning();
			show();
			break;
			case 3:insert_at_end();
			show();
			break;
			case 4:insert_at_middle();
			show();
			break;
			//case 5:reverse(struct node** head_ref);
			//printlist(struct node* head);
			break;
			default:printf("Exit");
			exit(0);
		}
	}
	while(1);
}

