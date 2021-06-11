class Solution {
public:
    string sortString(string s) {
        int str[26]={0};
        for(int i=0;i<s.size();i++){
            str[int(s[i]-97)]++;
        }
        sort(s.begin(),s.end());
        string ans="";
        while(ans.size() != s.size()){
            for(int i=0;i<s.size();i++){
                if(str[int(s[i])-97] > 0  && s[i] != s[i+1]){
                    ans.push_back(s[i]);
                    str[int(s[i])-97]--;
                }
            }
            for(int i=s.size()-1;i>=0;i--){
                if(str[int(s[i])- 97] > 0  && s[i] != s[i+1]){
                    ans.push_back(s[i]);
                    str[int(s[i])-97]--;
                }
            }
        }
        return ans;
    }
};
