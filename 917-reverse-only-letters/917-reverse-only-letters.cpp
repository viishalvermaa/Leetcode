class Solution {
public:
    string reverseOnlyLetters(string str) {
        int l=0;
        int h=str.size()-1;
        
        while(l<h){
            if(isalpha(str[l]) && isalpha(str[h]))
                swap(str[l++],str[h--]);
            if(!isalpha(str[l]))
                l++;
            if(!isalpha(str[h]))
                h--;
        }
        return str;
    }
};