class Solution {
public:
    bool isPalindrome(string s) {
         int i=0;
        int j=s.size()-1;
        while(i<j){
            if(iswalnum(s[i]) && iswalnum(s[j])){
                if(tolower(s[i])==tolower(s[j])){
                    i++;
                    j--;
                }
                else
                    return 0;
            }
            if(!iswalnum(s[i]))
                i++;
            if(!iswalnum(s[j]))
                j--;    
        }
    return 1;
        
    }
};