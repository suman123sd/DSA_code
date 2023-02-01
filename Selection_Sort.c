#include<stdio.h>
#include<conio.h>
void selection(int a[], int n)
{
    int i,j,s,temp;
    for(i=0;i<n-1;i++)
    {
        s=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[s])
            {
                s=j;
                temp=a[s];
                a[s]=a[i];
                a[i]=temp;
            }
        }
    }
}

void printArr(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}

void main()
{
    int a[]={12,31,25,8,32,17};
    int n=sizeof(a)/sizeof(a[0]);
    printf("Before sorting array elements are- \n");
    printArr(a,n);
    selection(a,n);
    printf("\nAfter sorting array elements are- \n");
    printArr(a,n);
    printf("\n\nSumanDandapat - 10800121041");
}
