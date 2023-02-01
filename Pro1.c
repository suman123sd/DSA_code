#include<stdio.h>

void insert_end(int ele)
{temp=p;
temp1=(struct node*)malloc(sizeof(struct node));
temp1->data=ele;
temp1->next=NULL;
if(p==NULL)
    p=temp1;
else{
    while(tmp->next!=NULL)
            tmp=tmp->next;
    tmp->next=tmp1;
}
}

