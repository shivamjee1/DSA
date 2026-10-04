//reverse the string using string
#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main(){
    //using string
    string name="shivam kumar.";
    reverse(name.begin(),name.end());
    cout<<name;
    return 0;
}