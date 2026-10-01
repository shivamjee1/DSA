#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*p;

void insert_beg(int);
void insert_end(int);
void insert_mid(int,int);
void delete_beg();
void delete_end();
void delete_mid(int);
void display();

int main(){
    int ch,ele,pos;
    char choice;
    p=NULL;

    printf("1.for insert at beg");
    printf("\n2.for insert at end");
    printf("\n3.for insert at mid");
    printf("\n4.for delete at beg");
    printf("\n5.for delete at end");
    printf("\n6.for delete at mid");
    printf("\n7.for display");
    printf("\n8.for exit");
do{printf("\n\nenter your choice:");
    scanf("%d",&ch);

 switch(ch){
    case 1:
         {printf("enter element to insert in first:");
         scanf("%d",&ele);
         insert_beg(ele);
        break;
        }
    case 2:
        {printf("enter element to insert in end:");
         scanf("%d",&ele);
         insert_end(ele);
        break;
        }
    case 3:
        {
        printf("enter element to insert in mid:");
         scanf("%d",&ele);
         printf("enter position of mid:");
         scanf("%d",&pos);
         insert_mid(ele,pos);
        break;
        }
    case 4:
        {
        delete_beg();
        break;
        }
    case 5:
        {
        delete_end();
        break;
        }
    case 6:
        {
        printf("enter position of mid to delete:");
         scanf("%d",&pos);
         delete_mid(pos);
        break; 
        }
    case 7:
        {
        display();
        break;      
        }
    case 8:
        {
       exit(0);  
        }
    default:
        {
        printf("wrong input\n");
        }
 }
    printf("\ninter y if you want to continue:");
    scanf(" %c",&choice);
 
}
    while(choice=='y'||choice=='Y');
 
    return 0;
}

void insert_beg(int val)
{
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=val;
    tmp->next=p;
    p=tmp;
}
void insert_end(int ele){
    struct node *tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=ele;
    tmp->next=NULL;
    if(p==0){
        p=tmp;
    }
    else{
        struct node*current=p;
        while(current->next!=NULL){
            current=current->next;
        }current->next=tmp;
    }

    return;
}
void insert_mid(int ele,int pos){
    struct node*tmp=(struct node*)malloc(sizeof(struct node));
    tmp->data=ele;
    if(pos==1){
        insert_beg(ele);
    }
    else{
        struct node*current=p;
        int count=1;
        while(count<pos-1 && current!=NULL){
            current=current->next;
            count++;
        }
        if(current==NULL){
            printf("position out of range\n");
            free(tmp);
            return;
        }
        tmp->next=current->next;
        current->next=tmp;
    }

    return;

}
void delete_beg(){
    if(p==NULL){
        printf("element is empty!");
    }
    else{
        struct node*tmp=p;
        p=p->next;
        printf("deleted element is %d",tmp->data);
        free(tmp);
    }

    //return;
}
void delete_end(){
    if(p==NULL)
    {
        printf("element is empty!");
       // return;
    }
    else if(p->next==NULL)
    {
        printf("deleted element is %d",p->data);
        free(p);
        p=NULL;
        //return;
    }
    else
    {
        struct node*current=p;
        struct node*prev=p;
        while(current->next!=NULL){
            prev=current;
            current=current->next;
        }
        printf("deleted element is %d",current->data);
        free(current);
        prev->next=NULL;

    }

    //return;
}
void delete_mid(int pos){

    return;
}
void display(){
    struct node*tmp=p;
    if(tmp==NULL){
        printf("element empty!");
    }
    else{
        while(tmp!=NULL){
            printf("%d\t",tmp->data);
            tmp=tmp->next;

        }
    }
    return;
}