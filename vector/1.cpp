#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec1={1,2,4};
    vec1[0]=0;
    cout<<vec1[0];
    vector<char>vect2(3,'a');
    vect2[0]='c';
    for(char val:vect2){
        cout<<val;
    }
    int left =vec1[0];
    int right=vec1.size();
    cout<<endl<<left<<right;
    //return left;
    // vector<int> vec3;
    // vec3[1]=2;
    // cout<<vec3[1];
    return 0;
}