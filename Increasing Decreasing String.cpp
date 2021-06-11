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




//second solution of problem

class Solution {
public:
    string sortString(string s) {
        sort(s.begin(),s.end());
        string ans="";
        while(ans.size() < s.size()){
            for(int i=0;i<s.size();i++){
                if(s[i] != s[i+1] && s[i] != '0'){
                    ans.push_back(s[i]);
                    s[i] ='0';
                }
            }
            for(int i=s.size()-1;i>=1;i--){
                if((s[i] != s[i-1]) && s[i] != '0'){
                    ans.push_back(s[i]);
                    s[i]='0';
                }
            }
            if(s[0] != '0'){
                    ans.push_back(s[0]);
                    s[0]='0';
            }
        }
        return ans;
    }
};
