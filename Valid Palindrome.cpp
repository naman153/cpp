class Solution {
public:
    bool isPalindrome(string s) {
        int j=s.size()-1;
        for(int i=0;i<s.size() && j>=0; i++){
            if((isalpha(s[i]) || isdigit(s[i])) && (isalpha(s[j]) || isdigit(s[j]))){
                if(tolower(s[i]) != tolower(s[j])){
                    return false;
                }
                j--;
            }
            else if(!(isalpha(s[i]) || isdigit(s[i]) || s[i]==' ') && !(isalpha(s[j]) || isdigit(s[i]) || s[j]==' ') ){
                j--;
                continue;
            }
            else if(!(isalpha(s[i]) || isdigit(s[i])) || s[i]==' '){
                continue;
            }
            else if(!(isalpha(s[j]) || isdigit(s[j])) || s[j]==' '){
                j--;
                i--;
            }
        }
        
        return true;
        
    }
};
