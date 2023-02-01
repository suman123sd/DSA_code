#include<stdio.h>
void heapify(int arr[],int n, int i)
{
	int largest=i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left<n && arr[left]>arr[largest])
		largest=left;
	if(right<n && arr[right]>arr[largest])
		largest=right;
	if(largest!=i)
	{
		//swap(arr[i].arr[largest]);
		int t=arr[i];
		arr[i]=arr[largest];
		arr[largest]=t;
		heapify(arr,n,largest);
	}
}

void print(int a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

void heapSort(int arr[], int n)
{
	int i=0;
	for(i=n/2-1;i>=0;i--)
	heapify(arr,i,0);
	for(i=n-1;i>=0;i--)
	{
		int temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		//swap(arr[size],arr[1]);
		heapify(arr,i,0);
	}
}

void main()
{
	int arr[]={70,60,55,45,50};
	int n=sizeof(arr)/sizeof(arr[0]),i=0;
	printf("Before sorting array are- \n");
	print(arr,n);
	heapSort(arr,n);
	printf("\nAfter sorting array are- \n");
	print(arr,n);
}
