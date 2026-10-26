class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int left=0;
        int n=nums.size();
        int right=n-1;
        int count=0;
        int j = 0;
        int pl,pr;
        if(left<right){
            while(right>0 && right>left){
                if(nums[right]>=nums[right-1]){
                    right--;
                }
                else break;
            }
            pr=right-1;
            while(left<n-1 && left<right){
               if(nums[left]<=nums[left+1]){
                    left++;
                }
                else break; 
            }
            pl=left+1;
            while(nums[left]>nums[right]){
                if(right<n-1){
                    right++;
                }
                else if(nums[left]>nums[right] && nums[left-1]<nums[right]){
                    break;
                }
                else{
                    left--;
                }
            }
            for(int i=pl;i<=pr;i++){
                if(nums[i]>=nums[left]){
                    while(right<n-1){
                        if(nums[i]>nums[right]){
                            right++;
                        }
                        else break;
                    }
                }
                else{
                    while(left>0){
                        if(nums[i]<nums[left] && nums[i]<nums[left-1]){
                            left--;
                        }
                        else{
                            break;
                        }
                    }
                }
            }
            if(left==n-1 || right==0){
                return 0;
            }
            else{
                count=right-left+1;
                return count;
            }
        }
        return 0;
    }
};