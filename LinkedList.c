#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node*link;
};

void append(struct node**,int);
void addatbeg(struct node**,int);
void addafter(struct node*,int, int);
void display(struct node*);
int count(struct node*);
void delete(struct node**,int);

void main()
{
    struct node *p;
    p=NULL;
    printf("\nNo. of elements in the Linked List=%d",count(p));
    append(&p,14);
    append(&p,30);
    append(&p,25);
    append(&p,42);
    append(&p,17);
    
    display(p);

    addatbeg(&p,999);
    addatbeg(&p,888);
    addatbeg(&p,77);

    display(p);

    addafter(p,7,0);
    addafter(p,2,1);
    addafter(p,5,99);

    display(p);
    printf("\nNo. of elements in the Linked List=%d",count(p));

    delete(&p,99);
    delete(&p,1);
    delete(&p,10);

    display(p);
    printf("\nNo. of elements in the Linked List=%d",count(p));

}
    void append(struct node **q,int num)
    {
        struct node *temp, *r;

        if(*q==NULL)
        {
            temp=malloc(sizeof(struct node));
            temp->data=num;
            temp->link=NULL;
            *q=temp;
        }
        else
        {
            temp=*q;

            while(temp->link!=NULL)
                temp=temp->link;

                r=malloc(sizeof(struct node));
                r->data=num;
                r->link=NULL;
                temp->link=r;
        }
    }

    void addatbeg(struct node **q,int num)
    {
        struct node *temp;

        temp=malloc(sizeof(struct node));

        temp->data=num;
        temp->link=*q;
        *q=temp;
    }
    void addafter(struct node *q,int loc ,int num)
    {
        struct node *temp,*r;
        int i;

        temp=q;

        for(i=0;i<loc;i++)
        {
            temp=temp->link;

            if(temp==NULL)
            {
                printf("\nThere are less than %d elements in the list",loc);
                return ;
            }
        }

        r=malloc(sizeof(struct node));
        r->data=num;
        r->link=temp->link;
        temp->link=r;
    }

    void display(struct node *q)
    {
        printf("\n");
        while(q!=NULL)
        {
            printf("%d",q->data);
            q=q->link;
        }
    }

    int count (struct node *q)
    {
        int c=0;

        while(q!=NULL)
        {
            q=q->link;
            c++;
        }
        return c;
    }

    void delete(struct node **q,int num)
    {
        struct node *old, *temp;

        temp=*q;

        while(temp!=NULL)
        {
            if(temp->data==num)
            {
                if(temp==*q)
                    *q=temp->link;
                
                else
                    old->link=temp->link;
                
                free(temp);
                return;
            }

            else
            {
                old=temp;
                temp=temp->link;
            }
        }

        printf("\nElement %d not found",num);
    }


