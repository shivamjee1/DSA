//quickShort

#include<stdio.h>
void quickShort(int arr[],int low,int high);
int partision(int arr[],int low,int high);
int main(){
    int arr[20],n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter element:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    quickShort(arr,0,n-1);
    printf("shorted array\n");
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}

void quickShort(int arr[],int low,int high){
    if(low<high){
        int pi=partision(arr,low,high);
        quickShort(arr,0,pi-1);
        quickShort(arr,pi+1,high);
    }
    return;
}

int partision(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    for(int j=i+1;j<=high;j++){
        if(pivot>arr[j]){
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i];
    arr[i]=arr[low];
    arr[low]=temp;
    return i;
}