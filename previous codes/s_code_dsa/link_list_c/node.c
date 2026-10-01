//make node
#include<stdio.h>
struct node{
    int data;
    struct node*next;
}*p;

void main(){
    int info;
    struct node*tmp=(struct node*)malloc(sizeof(struct node));//struct node*tmp;    //   tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=info;
    tmp->next=p;
    p=tmp;

}