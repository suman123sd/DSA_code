#include<stdio.h>
int a[]={10,20,30,40,50};
int ms=5;
void insert(int);
int delete();
void display();
void reverse();
void main()
{
	int op, it, v;
	//clrscr();
	printf("\n1->to insert \t 2->to delete \t 3->to reverse \t 4->to display \t 5->to exit");
	printf("\nEnter your option here: ");
	scanf("%d",&op);
	switch(op){
		case 1:printf("Enter data to be inserted here: ");
		scanf("%d",&it);
		insert(it);
		break;
		case 2:v=delete();
		printf("the deleted item is\n",v);
		break;
		case 3:reverse();
		break;
		case 4:display();
		break;
		case 5:exit(0);
		break;
		default:printf("wrong");
	}
	//getch();
}
void display()
{
	int i;
	printf("\nThe current element are: ");
	for(i=0;i<ms;i++)
	printf("%d\t",a[i]);
}
void reverse()
{
	int i;
	printf("The cotent of the arrqay are reversed");
	for(i=ms-1;i>=0;i--)
	printf("\t%d\t",a[i]);
}
int delete()
{
	int pl, i, v=0;
	printf("Pls enter pos. from cohere you want to delete the data");
	scanf("%d",&pl);
	v=a[pl];
	for(i=pl;i<ms;i++)
	{
		a[i]=a[i+1];
		ms--;
	}
	return v;
	display();
}
void insert(int x)
{
	int pl, i;
	printf("Enter the position where you want to enter the data");
	scanf("%d",&pl);
	for(i=ms;i>=pl;i--)
	{
		a[i]=a[i-1];
		a[pl]=x;
	}
	display();
}

