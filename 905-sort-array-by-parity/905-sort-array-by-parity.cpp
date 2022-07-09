class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even=0;
        int odd=nums.size()-1;
        
        while(even<odd){
            while(nums[even]%2==0 && even<odd)
                even++;
            while(nums[odd]%2!=0 && even<odd)
                odd--;
            if(even<odd){
                swap(nums[even],nums[odd]);
                even++;
                odd--;
            }
        }
        return nums;
    }
};