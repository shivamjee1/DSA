//reverse the string using char array
#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main(){
    //using char array
    char str[]="shivam";
    cout<<str;
    int st=0;
    int end=sizeof(str)-1;
    while(st<=end){
        char temp=str[st];
        str[st]=str[end];
        str[end]=temp;
        st++;
        end--;
    }
    for (int i = 0; i < sizeof(str); i++) {
        cout << str[i];
    }
    cout<<"what ";

    return 0;
}