//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
   public:
  
//     void findTwoSum(int target, int x, int y, int A[], int n,vector<int> &v){
        
//         //cout<<"dummy\n";
//         unordered_map<int,int> m;   
//         //m.insert({0,1});
//         for(int i=0;i<n;i++){
//             if(i!=x && m[i]!=y){
//                 int temp=A[i];
//                 if(m.find(target-temp)!=m.end()){
//                     v.push_back(m[target-A[i]]);
//                     v.push_back(i);
//                     v.push_back(x);
//                     v.push_back(y);
//                     return;
//                 }
//             }
//             else
//                 m.insert({A[i],i});
//         }
//         return;
        
//     }
  
    vector<int> satisfyEqn(int A[], int n) {
        vector<int> v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                //findTwoSum(A[i]+A[j],i,j,A,n,v);
                for(int k=0;k<n;k++) {
                    for(int l=k+1;l<n;l++) {
                        if(A[i] + A[j] == A[k] + A[l] && i!=k && i!=l && j!=k && j!=l) {
                            v.push_back(i);
                            v.push_back(j);
                            v.push_back(k);
                            v.push_back(l);
                            return v;
                        }
                    }
                }
            }
        }
        if(v.size()==0) {
            return {-1,-1,-1,-1};
        }
        
        return v;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends