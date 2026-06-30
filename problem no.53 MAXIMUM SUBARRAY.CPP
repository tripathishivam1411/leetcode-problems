//Given an integer array nums, find the subarray with the largest sum, and return its sum USING C++;
 

 class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int i=0;
    int bestending = nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        int v1= bestending+nums[i];
        int v2= nums[i];
        bestending=max(v1,v2);
        ans=max(ans,bestending);
    }
    return ans;
    
        
    }
};
