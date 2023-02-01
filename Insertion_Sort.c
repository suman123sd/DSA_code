#include<stdio.h>
#include<conio.h>
void insertion(int *, int);
int main()
{
    int i,n,j,k;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
    insertion(a,n);
    printf("The sorted list is: ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}

void insertion(int *a, int n)
{
    int i,j,k;
    for(i=1;i<n;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && k<a[j])
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=k;
    }
}
