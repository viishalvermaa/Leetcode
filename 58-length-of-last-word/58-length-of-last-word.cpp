class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        int count=0;
        for(int i=n;i>=0;i--){
            if(s[i]==' ' && count>0)
                return count;
            if(s[i]!=' ')
                count++;
        }
        return count;
    }
};