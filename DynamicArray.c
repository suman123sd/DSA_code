#include<stdio.h>
#include<stdlib.h>
int n, *p;
void main()
{
	int *x,i;
	//clrscr();
	puts("\nEnter size of the array ");
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	x=p;
	puts("Enter 'n' elements");
	for(i=0;i<n;i++)
	scanf("%d",&x[i]);
	for(i=0;i<n;i++)
	printf("%d",*(x+i));
	//getch();
}
