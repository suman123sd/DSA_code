#include<stdio.h>
char a[]={'a','b','c','d','e'};
void lin(char);
void main()
{
    char it;
    //clrscr();
    puts("Enter a number to be searcher: ");
    scanf("%c",&it);
    lin(it);
    //getch();
}
void 
lin(char x)
{
    char fl=0,i;
    for(i=0;i<5;i++)
    {
        if(a[i]==x)
        {
            fl=1;
            break;
        }
    }
    if(fl==0)
    puts("Sorry trat not found");
    else
    puts("The number is present in the array");

}
