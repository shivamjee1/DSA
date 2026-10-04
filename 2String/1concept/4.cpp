//iteration and \0 concept use(character arrays)
#include<iostream>

using namespace std;
int main(){
    char str[]="shivam kumar";
    int len=0;
    for(int i=0;i<str[i]!='\0';i++){
        cout<<str[i];
        len++;
    }
    cout<<len;
    return 0;
}