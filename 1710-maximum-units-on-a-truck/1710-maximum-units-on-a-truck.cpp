class Solution {
public:
    
    static bool sortCol(vector<int> &v1, vector<int> &v2){
        return v1[1] > v2[1];
    }
    
    int maximumUnits(vector<vector<int>>& v, int truckSize) {
        
        int n=v.size();
        //cout<<n<<endl;
        int k=truckSize;
        int sum=0;
        
        sort(v.begin(),v.end(),sortCol);
        
                
        for(int i=0;i<n;i++){
            
            if(k<=0)
                return sum;
            
            if(v[i][0]<=k){
                sum+=v[i][0]*v[i][1];
                k=k-v[i][0];
            }    
            else{
                sum+=k*v[i][1];
                k=k-v[i][0];
            }
        }
        return sum;
        
    }
};