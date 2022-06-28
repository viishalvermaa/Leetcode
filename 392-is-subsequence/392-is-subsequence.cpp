class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=s.size();
        int m=t.size();
        
        int i=0;
        int j=0;
        
        
        if(n==0)
            return true;
        if(m==0)
            return false;
        
        while(i<n && j<m){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else if(s[i]!=t[j])
                j++;
        }
        
        if(i==n)
            return true;
        return false;
    }
};