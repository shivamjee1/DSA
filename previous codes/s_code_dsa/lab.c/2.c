#include<stdio.h>
void insert(int*,int*,int, int);
void pop(int*,int*);
void display(int*,int*,int);
int main(){
    
    return 0;
}

void push(int *p,int *t,int *s,int*item){
    if(*t>=*s){
        printf("stack is full  !!");
    }
    else{
        *t=*t+1;
        *(*t+1)=item;
        printf("item is inserted");
    }
}


void pop(int *p,int*t){
    int item;
    if(*t<0){
        printf("stacjk is empty !!");
    }
    else{
        item=*(p+*t);
        *t=*t-1;
        printf("poped element is :%d",item);
    }
}

void display(int *p,int*t,int s){
    
}