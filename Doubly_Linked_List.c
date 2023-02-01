#define NULL 0
#include<stdio.h>
#include<stdlib.h>
struct dlink
{
	int data;
	struct dlink *next, *prev;
};
typedef struct dlink dlist;
dlist *head=NULL, *p;
void add();
void del();
void display();

void main()
{
	//clrscr();
	add();
	del();
	display();
	getch();
}
void add()
{
	char op='Y';
	dlist*t;
	while(op=='Y' || op=='y')
	{
		p=(dlist*)malloc(sizeof(dlist));
		printf("Enter data to add: ");
		scanf("%d",&p->data);
		if(head==NULL)
		{
			head=p;
			p->next=NULL;
			p->prev=NULL;
		}
		else
		{
			t->next=p;
			t->prev=t;
			t->next=NULL;
			t=p;
		}
		printf("\nDo you want to add more");
		printf("\nY for yes, N for no: ");
		fflush(stdin);
		op=getchar();
	}
}
void del()
{
	int it,fl;
	dlist*i,*t;
	if(head==NULL)
	{
		printf("\nSorry no double linkedlist");
		return;
	}
	else{
		printf("\nEnter data to delete ");
		scanf("%d",&it);
		for(i=head;i!=NULL;i=i->next)
		{
			if(i->data==it)
				if(it==head->data)
				{
					printf("\n 1st node is deleted");
					t=i;
					head=head->next;
					i->next->prev=i->prev;
					free(t);
				}
				else
				{
					t=i;
					i->next->prev=i->next;
					i->prev->next;
				}
				if(i->next=NULL)
				{
					printf("\n Last node is deleted");
				}
				else
				{
					printf("\n Intermediate node is deleted");
					break;
				}
				if(fl==0)
				{
					printf("data is not found");
				}
		}
	}
}
void display()
{
	int c=0;
	dlist*i,*j,t;
	printf("\nResult of forward direction");
	for(i=head;i!=NULL;i=i->next)
	{
		c=c+1;
		printf("\n %d is the node number\t %x is the address",i->data,c,i);
	}
	printf("%d is the total number of node present",c);
	printf("\n Result of backward direction");

	for(j=p;j!=NULL;j=j->prev)
	{
		c=c-1;
	}
}
