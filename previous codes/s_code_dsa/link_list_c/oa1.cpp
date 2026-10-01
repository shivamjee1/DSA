#include<iostream>
using namespace std;

int main(){
    string str="shivam kumar kamar";
    int n=str.length();
    int d=n-n/2;
    int s=0,j=0;
    string strO[d];
    string strE[n/2];
    for(int i=0;i<n;i++){
        if(i%2==0){
            strE[s]=str[i];
            s++;
        }
        else{
            strO[j]=str[i];
            j++;
        }
    }
    for(int i=0;i<d;i++){
        cout<<strO[i];
    }
    cout<<endl;
    for(int i=0;i<d;i++){
        cout<<strE[i];
    }
    
    return 0;
}
