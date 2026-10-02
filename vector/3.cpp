//vector remaining functions

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect={1,2,3,4,5};
    cout<<"size: "<<vect.size()<<endl;
    for(int val:vect){
        cout<<val;
    }
    vect.pop_back();
    cout<<"size after pop: "<<vect.size()<<endl;
    cout<<"element after pop : ";
    for(int val:vect){
        cout<<val;
    }
    cout<<endl;
    vect.front();
    vect.back();
    vect.at(1);
    cout<<"ele:"<<vect[0]<<endl;
    return 0;
}