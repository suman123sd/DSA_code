#include<stdio.h>
#include<malloc.h>
struct Node
{
    int val;
    struct Node *next;
};
typedef struct Node N;

N *start=NULL, *ptr, *tmp;

void CreateNode()
{
    int n, c=0;
    printf("Enter numbers of nodes: ");
    scanf("%d", &n);
    while(n!=c)
    {
        ptr=(N *)malloc(sizeof(N));
        printf("Enter value: ");
        scanf("%d", &ptr->val);
        if(start==NULL)
        {
            start=ptr;
            tmp=ptr;
            ptr->next=start;
        }
        else
        {
            tmp->next=ptr;
            tmp=ptr;
            ptr->next=start;
        }
        c++;
    }
}

void PrintNode()
{
    ptr=start;
    do
    {
        printf("%d->",ptr->val);
        ptr=ptr->next;
    }while(ptr!=start);
}

void InsertFirst()
{
    ptr=(N *)malloc(sizeof(N));
    printf("Enter value: ");
    scanf("%d", &ptr->val);
    tmp=start;
    while(tmp->next!=start)
        tmp=tmp->next;
    ptr->next=start;
    start=ptr;
    tmp->next=start;
}

void InsertEnd()
{
    ptr=(N *)malloc(sizeof(N));
    printf("Enter value: ");
    scanf("%d", &ptr->val);
    tmp=start;
    while(tmp->next!=start)
        tmp=tmp->next;
    tmp->next=ptr;
    ptr->next=start;
}

void InsertBetween()
{
    int n1,n2;
    printf("Enter the element after which the element is to be inserted: ");
    scanf("%d",&n1);
    printf("Enter the element before which the element is to be inserted: ");
    scanf("%d",&n2);
    tmp=start;
    while(tmp->val!=n1 && tmp->next->val!=n2)
        tmp=tmp->next;
    ptr=(N *)malloc(sizeof(N));
    printf("Enter the value: ");
    scanf("%d", &ptr->val);
    ptr->next=tmp->next;
    tmp->next=ptr;
}

int main()
{
    int ch;
    printf("Name:- Suman Dandapat, Roll no.-10800121041");
    printf("\n....-:MENU:-....");
    printf("\n1....Create node");
    printf("\n2....Print node");
    printf("\n3....Inserrt Beginning");
    printf("\n4....Insert End");
    printf("\n5....Insert Between");
    printf("\n0....Exit");
    do
    {
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:CreateNode();break;
            case 2:PrintNode();break;
            case 3:InsertFirst();break;
            case 4:InsertEnd();break;
            case 5:InsertBetween();break;
        }
    }
    while(ch!=0);
    return 0;
    
}