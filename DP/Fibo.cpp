#include<iostream>
#include<vector>
using namespace std;


int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
int fiboDP(int n,vector<int> &f){
    if(n==0 || n==1){
        return n;
    }

    if(f[n]!=-1){
        return f[n];
    }
    return f[n] = fiboDP(n-1,f)+fiboDP(n-2,f);
}

int main(){
    int n=6;
    vector<int> f(n+1,-1);
    int  fib=fiboDP(n,f);
    cout<<fib;
    return 0;
}