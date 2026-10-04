//iteration and \0 concept use(string)
#include<iostream>

using namespace std;
int main(){
    string name="shivam kumar";
    int len=0;
    // for(int i=0;i<name.length();i++){
    //     cout<<name[i]<<" ";
    //     len++;
    // }
    for(char ch:name){
        cout<<ch<<" ";
        len++;
    }
    cout<<len;
    return 0;
}