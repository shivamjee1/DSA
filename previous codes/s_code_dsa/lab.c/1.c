#include<stdio.h>

int main(){
    int a[100],b[100],c[100],m,n,i=0,j=0,l=0,k=0;
    
    while(i<m && j<n)
    {
        if(a[i]<=b[j])
        {
            c[k]=a[i];
            i++;
        }
        else{
            c[k]=b[j];
            j++;
        }
        k++;
    }
    return 0;
}