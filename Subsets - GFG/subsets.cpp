// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
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
    
    
    vector<vector<int> > subsets(vector<int>& A){
        vector<int> store;
        generate(store,0,A);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}  // } Driver Code Ends