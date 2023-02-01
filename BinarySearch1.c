#include<stdio.h>
#include<conio.h>
int a[]={10,20,30,40,50,60,70,80,90};
void binary(int, int, int, int);
void main()
{
	int lb=0,ub=5,fl=-1,it;
	//printf("Enter number of elements: ");
	//scanf("%d",&n);
	printf("\nEnter no. to search: ");
	scanf("%d",&it);
	binary(lb,ub,it,fl);
	getch();
}
void binary(int lb, int ub, int it, int fl)
{
	int b=lb,e=ub,m,count=0;
	m=(b+e)/2;
	while(it!=a[m] && b<e)
	{
		if(it<a[m])
		e=m-1;
		else
		b=m+1;
		m=(b+e)/2;
		count++;
	}
	if(it==a[m])
	{
		fl=m;
		printf("%d is the position of data",fl);
	}
	else{
		printf("Sorry data not found");
		printf("\n%d total number of searched performed",count);
	}
}
