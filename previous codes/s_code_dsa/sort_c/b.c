//bubble short

#include<stdio.h>
void swap(int*,int*);
int main(){
    int j,k,s;
    int n=5,a[5]={5,4,3,6,2};
   // printf("enter no. of element :");
    //scanf("%d",&n);
    //printf("enter element to store in array :");
    //for(int i=0;i<n;i++){
      //  scanf("%d",&a[i]);
   // }
    for(int j=0;j<n;j++){
        for(int k=0;k<n-j-1;k++){
            if(a[k]>a[k+1]){
                /*int tmp;
                tmp=a[k];
                a[k]=a[k+1];
                a[k+1]=tmp;*/
                swap(&a[k],&a[k+1]);
            }
        }
    }
    printf("shorted element : ");
    for(int s=0;s<n;s++){
        printf("%d\t",a[s]);
    }
    return 0;
}
void swap(int *a,int *b){
    int tmp=*a;
    
   *a=*b;
    *b=tmp;
    return;

}