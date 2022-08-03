class Solution {
public:
    
    int solve(vector<int> &nums, vector<int> &dp, int idx){
        if(idx>=nums.size())
            return 0;
        if(dp[idx]!=-1)
            return dp[idx];
        int pick=nums[idx]+solve(nums,dp,idx+2);
        int not_pick=solve(nums,dp,idx+1);
        return dp[idx]=max(pick,not_pick);
    }
    
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return solve(nums,dp,0);
    }
};