//linear search!!

#include<stdio.h>

int main(){
    int k=0,search,a[5]={1,2,3,4,5};
    int n=5;
    printf("enter no you have to find : ");
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(a[i]==search){
              printf("Number is found at position %d|",i);
           k++;
          // break;
            
        }
    }
     if(k==0){
            printf("number is not found\n");
            
        }
        printf("founded %d times",k);
    
    return 0;
}