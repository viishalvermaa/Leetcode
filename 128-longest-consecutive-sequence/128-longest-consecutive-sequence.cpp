class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        
        unordered_set<int> s(nums.begin(),nums.end());
        
        for(auto x:nums){
            if(s.find(x-1)==s.end()){
                int j=x;
                while(s.find(j)!=s.end())
                    j++;
                res=max(res,j-x);
            }
        }
        return res;
    }
};