class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int total=0;
        for(int i=0;i<k;i++)
            total+=cardPoints[i];
        
        int curr=total;
        for(int i=k-1;i>=0;i--){
            curr-=cardPoints[i];
            curr+=cardPoints[cardPoints.size()-k+i];
            total=max(total,curr);
        }
        return total;
    }
};