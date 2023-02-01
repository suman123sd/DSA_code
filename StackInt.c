#include<stdio.h>
int a[]={10,20,30,40,50};
void lin(int);
void main()
{
    int it;
    //clrscr();
    puts("Enter a number to be searcher: ");
    scanf("%d",&it);
    lin(it);
    //getch();
}
void lin(int x)
{
    int fl=0,i,index;
    printf("ARRAY- ");
    for(i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            fl=1;
            index=i;
            break;
        }
    }
    if(fl==0)
    puts("Sorry trat not found");
    else
    puts("\nThe number is present in the array");
    printf("the index of the search elements %d",i);

}
