// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
public:

    void insertAtBottom(stack<int> &s, int x){
        if(s.empty())
            s.push(x);
        else{
            int a=s.top();
            s.pop();
            insertAtBottom(s,x);
            
            s.push(a);
        }
    }

    void revStack(stack<int> &s){
        if(s.size()>0){
            int x=s.top();
            s.pop();
            revStack(s);
            
            insertAtBottom(s,x);
        }
            
        
    }

    vector<int> Reverse(stack<int> s){
        int n=s.size();
        vector<int> v;
        if(n==1){
            v.push_back(s.top());
            return v;
        }
            
        revStack(s);
        
        while(!s.empty()){
            v.push_back(s.top());
            s.pop();
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};

// { Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        vector<int> ans=ob.Reverse(St);
        for(int i=0;i<N;i++){
            cout<<ans[i];
            if(i!=N-1) cout<<" ";
        }
        cout<<endl;
    }
}  // } Driver Code Ends