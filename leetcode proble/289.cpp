/*question no. 289 Minimum size subarray Sum;
*/

#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;

class solution{
    public: 
    int function(vector<int>& nums) {
        //code
        int left=0;
        int right=0;
        int n=nums.size();
        int res=40;
        int sum=nums[0];
        int target=15;
        while(left<=right && right<n){
            if(sum>=target){
                int len=right-left+1;
                res=min(res,len);
                if(res==1) cout<<1;
                if(left==right){
                    right++;
                    if(right>n-1){
                        break;
                    }else{
                        sum+=nums[right];
                    }
                }else{
                    left++;
                    sum=sum-nums[left];
                }
            }
            else{
                right++;
                if(right>n-1){
                    break;
                }else{
                    sum+=nums[right];
                }
            }
        }
        if(res>n){
            cout<<0;
        }
        else{
            cout<<res;
        }
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