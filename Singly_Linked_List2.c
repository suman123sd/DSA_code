#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
	int data;
	struct node*next;
}
*head=NULL;
void create()
{
	char ch;
	do{
		struct node* new1, *t;
		new1=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value of the new code: ");
		scanf("%d", &new1->data);
			new1->next=NULL;
		if(head=NULL)
		{
			new1->next=NULL;
			if(head==NULL)
			{
				head=new1;
				t=new1;
			}
			printf("\nDo you want to continue? if yes(press y) for No(press y)");
			scanf("%d",&ch);
		}
		
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
	struct node* new1, *t;
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
	struct node* new1,*temp,*t;
	int pos,i;
	printf("\nEnter data fr the new node to be inserted");
	scanf("%d",&new1->data);
	new1->next=NULL;
	printf("\nEnter the positin where you wanted struct new node");
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
void show()
{
	struct node* new1, *end;
	printf("\nEnter linked list is look like: ");
	new1=end;
	while(new1!=NULL)
	{
		printf("%d",new1->data);
		new1=new1->next;
	}
	printf("NULL");
}
void main()
{
	int ch;
	//clrscr();
	do{
		printf("\n1->create");
		printf("\n2->Enter at beginning");
		printf("\n3->insert at end");
		printf("\n4->insert at middle");
		printf("\n5->Press 0 at exit");
		printf("\nEnter your choice");
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
			default:printf("Exit");
			exit(0);
		}
		
	}
	while(1);
}

