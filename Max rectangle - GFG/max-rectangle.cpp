// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/


// 3 10
// 0 0 0 0 1 0 1 1 1 1
// 1 0 1 1 0 1 0 1 0 1
// 0 0 1 0 0 0 1 0 1 1


class Solution{
  public:
  
  int largestRect(int arr[] , int n)
    {
        stack<int> s ;
        int res = 0 ;
        for(int i=0 ; i<n ; i++)
        {
            while(!s.empty() && arr[s.top()]>=arr[i])
            {
                int temp = s.top();
                s.pop();
                int val = arr[temp] * (s.empty() ? i : i-s.top()-1);
                res = max(res,val);
            }
            s.push(i);
        }
        while(!s.empty())
        {
            int temp = s.top();
            s.pop();
            int val = arr[temp] * (s.empty() ? n : n-s.top()-1);
            res = max(res,val);
        }
        return res;
    }
    
    int maxArea(int M[MAX][MAX], int n, int m) 
    {
        // Your code here
        int arr[m] = {0} ;
        for(int i=0;i<m;i++)
        {
            arr[i] = M[0][i];
            //cout<<arr[i]<<" ";
        }
        //cout<<endl;
        int res = largestRect(arr,m);
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(M[i][j]==1)
                {
                    // M[i][j] += M[i-1][j];
                    arr[j] += M[i][j];
                }
                else
                {
                    //M[i][j] = 0;
                    arr[j] = 0;
                }
                     
                
                //cout<<arr[j]<<" ";
                
            }
            //cout<<endl;
            int temp = largestRect(arr,m);
            res = max(temp,res);
            //cout<< res << endl ;
        }
        return res;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends