class Solution {
public:
    
    vector<vector<int>> ans;
    
    void generate(vector<int> &store, int i, vector<int> &nums){
        
        if(i==nums.size()){
            ans.push_back(store);
            return;
        }
        
        generate(store,i+1,nums);
        store.push_back(nums[i]);
        generate(store,i+1,nums);
        store.pop_back();
    }
    
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> store;
        generate(store,0,nums);
        return ans;
        
    }
};