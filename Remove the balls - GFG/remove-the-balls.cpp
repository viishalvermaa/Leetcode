//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius){
        stack<int> s1;
        stack<int> s2;
        
        s1.push(color[0]);
        s2.push(radius[0]);
        
        bool flag;
        
        for(int i=1;i<N;i++){
            flag=false;
            if(color[i]==s1.top() && radius[i]==s2.top()){
                s1.pop();
                s2.pop();
            }
            else{
                s1.push(color[i]);
                s2.push(radius[i]);
            }
            
            if(s1.size()==0 && i<N-1){
                s1.push(color[i+1]);
                s2.push(radius[i+1]);
                flag=true;
            }
            if(flag==true)
                i=i+1;
            
        }
        return s1.size();
        
    }
};


//{ Driver Code Starts.
int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        vector<int> color(n), radius(n);
        for (int i = 0; i < n; i++) cin >> color[i];
        for (int i = 0; i < n; i++) cin >> radius[i];
        int ans = sol.finLength(n, color, radius);
        cout << ans << "\n";
    }

    return 0;
}

// } Driver Code Ends