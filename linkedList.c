#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main()
{
    /// node declaration
    struct node *a;
    struct node *b;
    struct node *c;
    ///Memory allocation
    a=(struct node*)malloc(sizeof(struct node));
    b=(struct node*)malloc(sizeof(struct node));
    c=(struct node*)malloc(sizeof(struct node));
    ///Node initialization
    a->data=10;
    a->next=b;
    b->data=20;
    b->next=c;
    c->data=30;
    c->next=NULL;
    ///Print/Traverse Node
    printf("%d -> ",a->data);
    printf("%d -> ",b->data);
    printf("%d",c->data);
}
