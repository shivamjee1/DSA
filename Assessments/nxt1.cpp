/*this problem is like there have a cotest of x round with a-f dificulties section and there have a list of question having
dificulty wise we have find the minimum number of question we have to add so the contest will works smoothly.
like 3 round so all a0f should have 3 question atleast
*/

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

class solution{
    public: 
    int MIncount(vector<char>& list,int m) {
        int mincount=0;
        int n=list.size();
        vector<int>res(7,0);//a-f
        for(int i=0;i<n;i++){
            if(list[i]=='A')res[0]++;
            else if(list[i]=='B')res[1]++;
            else if(list[i]=='C')res[2]++;
            else if(list[i]=='D')res[3]++;
            else if(list[i]=='E')res[4]++;
            else if(list[i]=='F')res[5]++;
            else if(list[i]=='G')res[6]++;
        }
        for(int val:res){
            cout<<val;
        }
        cout<<endl;
        for(int i=0;i<7;i++){
            if(res[i]==m){
                continue;
            }else mincount+=(m-res[i]);
            cout<<mincount;
        }
        cout<<endl<<mincount;
        return mincount;
    }
};

int main(){
    int n;
    int round;
    cout<<"enter no. of round :";
    cin>>round;
    cout<<"enter no. of availabel questions :";
    cin>>n;
    string str;
    cout<<"enter list : ";
    cin>>str;
    vector<char>ques(n);
    for(int i=0;i<n;i++){
        ques[i]=str[i];
    }
    for(char val:ques){
        cout<<val;
    }
    cout<<endl;
    solution obj;
    int mincount=obj.MIncount(ques,round);
    cout << "\nMinimum count: " << mincount;
    return 0;
}