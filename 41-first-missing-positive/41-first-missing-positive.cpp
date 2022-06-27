class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        bool hasOne=false;
        for(auto i:nums){
            if(i==1){
                hasOne=true;
                break;
            }
        }
        
        if(!hasOne)
            return 1;
        
        if(n==1)
            return 2;
        
        for(int i=0;i<n;i++){
            if(nums[i]>n || nums[i]<=0)
                nums[i]=1;
        }
        
        for(int i=0;i<nums.size();i++){
            int x=abs(nums[i]);
            if(nums[x-1]>0)
                nums[x-1]*=-1;
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                return i+1;
        }
        return n+1;
    }
    
};