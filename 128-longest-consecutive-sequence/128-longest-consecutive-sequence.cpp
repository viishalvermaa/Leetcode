class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count=1;
        int present_cnt=1;
        set<long long> s(nums.begin(),nums.end());
        set<long long> s1(nums.begin(),nums.end());
        
        if(!nums.size())
            return 0;
        
        for(auto x:s1){
            if(s.find(x+1)!=s.end())
                present_cnt++;
            else{
                count=max(count,present_cnt);
                present_cnt=1;
            }
        }
        return count;
        
    }
};