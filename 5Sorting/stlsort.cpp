//stl sort
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    //code
    vector<int> arr={1,2,3,4,5,0};
    for(int val:arr){
        cout<<val;
    }
    sort(arr.begin(),arr.end());
    for(int val:arr){
        cout<<val;
    }
    return 0;
}