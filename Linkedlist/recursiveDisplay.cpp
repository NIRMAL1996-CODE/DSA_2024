//write a program to recursive display linkedlist//
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*first=NULL;

void create(int A[], int n)
{
    int i;
    struct node *t, *last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

void display(struct node *p)
{
    while(p!=NULL)
    {
        printf("%d \n",p->data);
        p=p->next;
    }
}

void rDisplay(struct node *p)
    {
        
        if(p!=NULL)
        {
            printf(" %d ",p->data);
            rDisplay(p->next);
        }
    }

int main()
{
    int A[]={3,4,5,6,7,8 };
    create(A,5);
    display(first);
    rDisplay(first);
    return 0;
    
}
