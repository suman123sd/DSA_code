#include<stdio.h>
#include<process.h>
int s[5], t=-1;
#define ms 4
void push(int);
int pop();
void display()
{
	int i;
	for(i=t;i>=0;i--)
	printf("%d\t",s[i]);
}
void main()
{
	int choice, it, v;
	//clrscr();
	while(10)
	{
		printf("\n1. PUSH\t 2. POP\t 3. EXIT");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter a data to push ");
			scanf("%d",&it);
			push(it);
			break;
			case 2:v=pop();
			if(v>0)
			printf("\n%d is to be poped from top of stack",v);
			break;
			case 3:exit(0);
		}
	}
	getch();
}
void push(int x)
{
	if(t==ms)
	printf("\nOVERFLOW\n");
	else
	{
		t=t+1;
		s[t]=x;
		display();
	}
}
int pop()
{
	int v1=-999;
	if(t<0)
	printf("\nUNDERFLOW\n");
	else
	{
		v1=s[t];
		t=t-1;
		display();
	}
	return v1;
}
