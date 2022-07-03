// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int ZigZagMaxLength(vector<int>&nums){
		    int n=nums.size();
		    int peak=1;
		    int valley=1;
		    
		    for(int i=1;i<n;i++){
		        if(nums[i]>nums[i-1])
		            peak=valley+1;
		        else if(nums[i]<nums[i-1])
		            valley=peak+1;
		    }
		    return max(peak,valley);
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.ZigZagMaxLength(nums);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends