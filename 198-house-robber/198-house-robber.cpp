class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        int prev2=0;
        int prev=nums[0];
        int curr;
        
        for(int i=1;i<n;i++){
            int take=nums[i];
            if(i>1)
                take+=prev2;
            int not_take=prev;
            curr=max(take,not_take);
            prev2=prev;
            prev=curr;
        }
        return prev;
    }
};