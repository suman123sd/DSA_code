#include<stdio.h>
void quick(int *, int , int);
int main()
{
    int i;
    int a[5];
    printf("Enter %d number: ", 5);
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);
    quick(a,0,4);
    printf("The number in asseding order are: ");
    for(i=0;i<5;i++)
        printf("%d ", a[i]);
    return 0;
}

void quick(int a[],int low, int up)
{
    int l,r,p,t;
    l=low;
    r=up;
    p=low;
    if(low>=up)
        return;
    while(1)
    {
        while(a[r]>=a[p]  && p!=r)
            r--;
        if(p==r)
            break;
        if(a[r]<a[p])
        {
            t=a[p];
            a[p]=a[r];
            a[r]=t;
            p=r;
        }
        while(a[l]<=a[p] && l!=p)
            l++;
        if(p==1)
            break;
        if(a[l]>a[p])
        {
            t=a[p];
            a[p]=a[l];
            a[l]=t;
            p=l;
        }
    }
    quick(a,low,p-1);
    quick(a,p+1,up);
}