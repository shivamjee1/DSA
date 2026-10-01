#include<iostream>
using namespace std;

int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"b";
        }
        for(int k=0;k<2*i+1;k++){
            if(k%2==0){
                cout<<"*";
            }else cout<<"b";
        }
        cout<<endl;
    }
    return 0;
}