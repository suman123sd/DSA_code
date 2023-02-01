#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
//int ms;
//void show();
//void create();
//void del_from_beginning();
//void del_from_end();
//void del_from_end();

struct node
{
	int data;
	struct node *next;
}
*head=0;

void create()
{
	int choice;
	do
	{
		struct node* new1, *t;
		new1=(struct node*)malloc(sizeof(struct node));
		printf("Enter the value of the new code: ");
		scanf("%d", &new1->data);
		new1->next=0;
		if(head==0)
		{
			head=new1;
			t=new1;
		}
		else{
			t->next=new1;
			t=new1;
		}
		printf("\nDo you want to continue? if yes(press 1) for No(press any key)");
		scanf("%d",&choice);
	}
	while(choice==1);
}

struct node *head,*t;
void del_from_beginning()
{
    struct node *t;
    t=head;
    head=head->next;
    free(t);
}

void del_from_end()
{
    struct node *prevnode;
    t=head;
    while(t->next != 0)
    {
        prevnode=t;
        t=t->next;
	}
        if(t==head)
        {
            head=0;
			free(t);
        }
        else{
            prevnode->next=0;
			free(t);
        }
     
}

void del_at_pos()
{
    struct node *nextnode;
    int pos, i=0;
    t=head;
    printf("Enter the position: ");
    scanf("%d", &pos);
    while(i<pos-1)
    {
        t=t->next;
        i++;
    }
    nextnode=t->next;
    t->next=nextnode->next;
    free(nextnode);

}

void get_length()
{
	int count=0;
	struct node *t;
	t=head;
	while(t!=0)
	{
		count++;
		t=t->next;
	}
	printf("\nThe length of the linked list: %d",count);
}

void show()
{
	struct node *new1;
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
	struct node* t =head;
	while(t!=NULL)
	printf("%d",t->data);
	t=t->next;
}

void main()
{
	int ch;
	//clrscr();
	do{
		printf("\n1->create");
		printf("\n2->Delete from beginning");
		printf("\n3->Delete from end");
		printf("\n4->Delete at position");
		printf("\n5->length of linked list");
		printf("\n6->Press 0 at exit");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			show();
			break;
			case 2:del_from_beginning();
			show();
			break;
			case 3:del_from_end();
			show();
			break;
			case 4:del_at_pos();
			show();
			break;
			case 5:show();
			get_length();
			break;
			default:printf("Exit");
			exit(0);
		}
		
	}
	while(1);
}


