//vector functions

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect;
    cout<<"size: "<<vect.size()<<endl;
    vect.push_back(20);
    cout<<"size : "<<vect.size()<<endl;
    cout<<"ele:"<<vect[0]<<endl;
    return 0;
}