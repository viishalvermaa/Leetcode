class Solution {
public:
    
    bool areSame(int a[], int b[]){
        for(int i=0;i<256;i++){
            if(a[i]!=b[i])
                return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        string txt=s;
        string pat=p;
        vector<int> v;
        
        int counttxtW[256]={0};
        int countPat[256]={0};
        
        for(int i=0;i<pat.size();i++){
            counttxtW[txt[i]]++;
            countPat[pat[i]]++;
        }
        
        if(areSame(counttxtW,countPat))
            v.push_back(0);
        
        for(int i=pat.length();i<txt.length();i++){
            counttxtW[txt[i]]++;
            counttxtW[txt[i-pat.length()]]--;
            if(areSame(counttxtW,countPat))
                v.push_back(i-pat.length()+1);
        }
        
        
        
        return v;
        
    }
};