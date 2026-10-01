//selection short

#include<stdio.h>

int main(){
    int n,temp,pivot,min,j,i;
    printf("enter no of element :");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d element:",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++){
        min=arr[j];
        pivot=j;
        for(int k=j;k<n;k++){
            if(min>arr[k]){
                pivot=k;
                min=arr[k];
            }
        }
        int temp;
        temp=arr[j];
        arr[j]=arr[pivot];
        arr[pivot]=temp;
        }
    printf("sorted  array:");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}