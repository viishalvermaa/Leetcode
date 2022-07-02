// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x){
    long long l=1, h=x, mid, ans;
    
    while(l<=h){
        mid=l+(h-l)/2;
        if(mid*mid==x)
            return mid;
        else if(mid*mid>x)
            h=mid-1;
        else{
            l=mid+1;
            ans=mid;
        }
    }
    return ans;
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends