class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int sum=0;
        vector<int> l2r(n,1);
        vector<int> r2l(n,1);
        
        l2r[0]=1;
        r2l[0]=1;
        //cout<<l2r[0]<<" "<<l2r[1];
        
        for(int i=1;i<n;i++){
            if(ratings[i]>ratings[i-1])
                l2r[i]=l2r[i-1]+1;
        }
        
        for(int i=n-2;i>=0;i--){
            if(ratings[i]>ratings[i+1])
                r2l[i]=r2l[i+1]+1;
        }
        
        for(int i=0;i<n;i++)
            sum+=max(l2r[i],r2l[i]);
        
        return sum;
        
        
        
        
        
        
        
        
        
        
//         if(ratings[1]>=ratings[0])
//             ans.push_back(basic);
//         else
//             ans.push_back(basic+1);
//         cout<<ans[0]<<ans[1];
        
//         for(int i=1;i<n-1;i++){
//             if(ratings[i]<ratings[i-1] && ratings[i]>ratings[i+1])
//                 ans.push_back(ans[ratings[i-1]]);
//             else if(ratings[i]>ratings[i-1] && ratings[i]<=ratings[i+1])
//                 ans.push_back(ans[ratings[i-1]]+1);
//             else if(ratings[i]<ratings[i-1] && ratings[i]<=ratings[i+1])
//                 ans.push_back(basic);
//         }
        
//         if(ratings[n-1]>ratings[n-2])
//             ans.push_back(ans[ratings[n-2]]+1);
//         else if(ratings[n-1]<=ratings[n-2])
//             ans.push_back(basic);
        
         
//         for(int i=0;i<n;i++)
//             sum+=ans[i];
            
        

        
        
    }
};