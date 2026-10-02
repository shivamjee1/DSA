//memry allocation capacity and size
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect={1};
    cout<<vect.size();
    cout<<vect.capacity();
    cout<<endl;
    vect.push_back(2);
    cout<<vect.size();
    cout<<vect.capacity();
    cout<<endl;
    vect.push_back(3);
    cout<<vect.size();
    cout<<vect.capacity();
    cout<<endl;
    vect.push_back(10);
    cout<<vect.size();
    cout<<vect.capacity();
    cout<<endl;
    vect.push_back(16);
    cout<<vect.size();
    cout<<vect.capacity();
    return 0;
}