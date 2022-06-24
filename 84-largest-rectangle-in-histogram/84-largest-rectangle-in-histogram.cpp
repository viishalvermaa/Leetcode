class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int> left;
        vector<int> right;
        stack<pair<long long,int>> s;
        long long width[n];
        
        //for NSL
        for(int i=0;i<n;i++){
            if(s.empty())
                left.push_back(-1);
            else if(!s.empty() && s.top().first<arr[i])
                left.push_back(s.top().second);
            else if(!s.empty() && s.top().first>=arr[i]){
                while(!s.empty() && s.top().first>=arr[i])
                    s.pop();
                if(s.empty())
                    left.push_back(-1);
                else
                    left.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }
        while(!s.empty())
            s.pop();
        
        //for NSR
        for(int i=n-1;i>=0;i--){
            if(s.empty())
                right.push_back(n);
            else if(!s.empty() && s.top().first<arr[i])
                right.push_back(s.top().second);
            else if(!s.empty() && s.top().first>=arr[i]){
                while(!s.empty() && s.top().first>=arr[i])
                    s.pop();
                if(s.empty())
                    right.push_back(n);
                else
                    right.push_back(s.top().second);
            }
            s.push({arr[i],i});
        }
        reverse(right.begin(),right.end());
        
        long long max=0;
        long long area;
        for(int i=0;i<n;i++){
            width[i]=right[i]-left[i]-1;
            area=width[i]*arr[i];
            if(area>max)
                max=area;
        }
        
        return max;
        
        
    }
};