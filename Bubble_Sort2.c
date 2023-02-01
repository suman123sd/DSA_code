#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a[5]={5,-12,0,3,11}, temp, fl=0, i=0, k=0, j=0, in=0;
    printf("\nThe aray elements are: ");
    while(i<5)
        printf(" >> %d", a[i++]);
        i=1;
    while(i<5)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]<temp)
        {
            a[j+1]=a[j];
            j--;
            in++;
        }
        a[j+1]=temp;
        printf("\nAfter %d times and %d interchanges: ",i,in);
        in=0;
        k=0;
        while(k<5)
            printf(" >> %d",a[k++]);
        i++;
    }
    i=0;
    printf("\nThe sorted array is: ");
    while(i<5)
        printf(" >> %d",a[i++]);
}