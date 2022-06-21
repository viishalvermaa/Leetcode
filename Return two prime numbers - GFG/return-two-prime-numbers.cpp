// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

        
    bool isPrime(int n){
        for(int i=2;i<=n/2;i++)
            if(n%i==0)
                return false;
        return true;
    }

    vector<int> primeDivision(int n){
        vector<int> v;

        
        for(int i=2;i<n;i++){
            if(isPrime(i)){
                if(isPrime(n-i)){
                    v.push_back(i);
                    v.push_back(n-i);
                    break;
                }
            }
        }
        return v;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.primeDivision(N);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}  // } Driver Code Ends