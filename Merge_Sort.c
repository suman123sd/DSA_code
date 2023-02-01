#include<stdio.h>
void printarray(int *a, int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
}

void merge(int a[], int mid, int low, int high)
{
	int i,j,k,b[100];
	i=low;
	j=mid+1;
	k=low;
	while(i<=mid && j<=high)
	{
		if(a[i]<a[j])
		{
			b[k]=a[i];
			i++;
			k++;
		}
		else
		{
			b[k]=a[j];
			j++;
			k++;
		}
	}
	while(i<=mid)
	{
		b[k]=a[i];
		k++;
		i++;
	}
	while(j<=high)
	{
		b[k]=a[j];
		k++;
		j++;
	}
	for(i=low;i<=high;i++)
		a[i]=b[i];
}

void mergesort(int a[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		mergesort(a,0,mid);
		mergesort(a,mid+1,high);
		merge(a,mid,low,high);
	}
}

void main()
{
	int a[]={3,5,1,7,9,2,90};
	int n=7;
	printf("\nThe elements before sorting\n");
	printarray(a,n);
	mergesort(a,0,6);
	printf("\nThe elements after sorting\n");
	printarray(a,n);
}
