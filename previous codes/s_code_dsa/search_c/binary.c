//binary search!!

#include<stdio.h>

int main(){
    int n,m,search,l=0;
    
    printf("enter no of element :");
    scanf("%d",&n);
    int r=n;
    int a[n];
    printf("enter element\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter element to search :");
    scanf("%d",&search);
    while(l<r)
    {
         m=(l+r)/2;
        if(a[m]==search){
            printf("no. is found at %d position\n",m+1);
            break;
        }
        else if(a[m]>search){
            r=m-1;
        }
        else if(a[m]<search){
            l=m+1;
        }
        else{
            printf("not in array||");
            break;
        }
    }
    return 0;
}