/*this is the advance problem practice template as leetcode;
*/

#include<iostream>
#include<unordered_map>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

class solution{
    public: 
    int function(vector<int>& nums) {
        //code
        int k=2;
        int left=0,high=0;
        int res=-1;
        int n=nums.size();
        unordered_map<int,int>f;
        f[nums[high]]++;
        while(left<=high && high<n){
            int size=f.size();
            if(size<=k){
                int len=high-left + 1;
                res=max(res,len);
                high++;
                if(high>n-1) break;
                f[nums[high]]++;
            }else{
                left++;
                f[nums[left-1]]--;
                if(f[nums[left-1]]==0){
                    f.erase(nums[left-1]);
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