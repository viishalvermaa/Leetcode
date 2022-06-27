class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)
                s.insert(nums[i]);
        }
        if(s.size()==0)
            return 1;
        int mx=*max_element(nums.begin(),nums.end());
        
        for(int i=1;i<mx;i++){
            if(s.find(i)==s.end())
                return i;
        }
        return mx+1;
    }
};