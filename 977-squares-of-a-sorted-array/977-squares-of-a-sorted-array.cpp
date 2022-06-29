class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        if(nums[0]>=0){
            for(int i=0;i<n;i++)
                ans.push_back(nums[i]*nums[i]);
            return ans;
        }
        
        if(n==1 && nums[0]<0){
            ans.push_back(nums[0]*nums[0]);
            return ans;
        }
        
        if(nums[n-1]<=0){
            for(int i=n-1;i>=0;i--)
                ans.push_back(nums[i]*nums[i]);
            return ans;
        }
        
        int i=0;
        while(nums[i]<0)
            i++;
        int j=i-1;
        
        //cout<<i<<" "<<j;
        
        while(i<n && j>=0){
            if(abs(nums[i])<=abs(nums[j])){
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]*nums[j]);
                    j--;
            }
        }
        
        if(i==n){
            while(j>=0){
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        else{
            while(i<n){
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
        }
        
        
        return ans;
    }
};