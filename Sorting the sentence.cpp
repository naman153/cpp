class Solution {
public:
    string sortSentence(string s) {
        string ans="";
        for(int i=1;i<10;i++){
            int p=0;
            for(int j=0;j<s.size();j++){
                if(j<s.size() && s[j]==' '){
                    p=j+1;
                }
                if(s[j] == i+48){
                    ans += s.substr(p,j-p);
                    ans += ' ';
                }
            }
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};
