/*3. Longest Substring Without Repeating Characters;*/

#include<iostream>
#include<unordered_map>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

class solution{
    public: 
    int function(vector<int>& s/*string s*/) {
        //code
        int left=0;
        int right=0;
        int n=s.size();
        if(n==0) return 0;
        unordered_map<char,int>f;
        f[s[right]]++;
        int res=-1;
        while(left<=right && right<n){
            int size=f.size();
            int len=right-left+1;
            if(len==size){
                res=max(res,len);
                right++;
                if(right>n-1) return res;
                f[s[right]]++;
            }else{
                left++;
                f[s[left-1]]--;
                if(f[s[left-1]]==0){
                    f.erase(s[left-1]);
                }  
            }
        }
        return res;
    }
};

int main(){
    int n;
    string str;
    vector<int> arr;
    cout<<"enter vector element : ";
    cin>>str;
    for(int val:str){
        arr.push_back(val-'0');
    }
    cout<<str<<endl;
    solution obj;
    obj.function(arr);
    return 0;
}