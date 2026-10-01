//insertion short

#include<stdio.h>

int main(){
    int n,j,i;
    printf("enter no. of element in arrat:");
    scanf("%d",&n);
    int a[n];
    printf("enter element:");
   for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
   }
    for(int i=1;i<=n;i++){
        int temp=a[i];
        for(j=i-1;j>=0;j--){
            if(temp<a[j]){
                a[j+1]=a[j];
                a[j]=temp;
            }
             
        }
       
    }
    printf("shorted array:");
    for(int k=0;k<n;k++){
        printf("%d ",a[k]);
    }

    return 0;
}