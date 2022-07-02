class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        long long hmax=0, vmax=0, prev=0;
        
        for(auto i:horizontalCuts){
            hmax=max(hmax,i-prev);
            prev=i;
        }
        hmax=max(hmax,h-prev);
        
        prev=0;
        
        for(auto i:verticalCuts){
            vmax=max(vmax,i-prev);
            prev=i;
        }
        vmax=max(vmax,w-prev);
        
        
        int mod=1e9+7;
        return hmax*vmax%mod;
        
    }
};