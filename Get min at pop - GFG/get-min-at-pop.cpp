// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++

int minEle;
//Function to push all the elements into the stack.
stack<int> _push(int arr[],int n){
    stack<int> s;
    for(int i=0;i<n;i++){
        
        if(s.empty()){    
            s.push(arr[0]);
            minEle=arr[0];
        }
    
    
        else if(arr[i]>=minEle)
            s.push(arr[i]);
        else{
            s.push((2*arr[i])-minEle);
            minEle=arr[i];
        }
    }
    return s;

}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>s)
{
    while(!s.empty()){
        if(s.top()<minEle){
            cout<<minEle<<" ";
            minEle=((2*minEle)-s.top());
        }
        else
            cout<<minEle<<" ";
        s.pop();
    }
    
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends