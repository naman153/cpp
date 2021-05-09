class Solution {
public:
    string truncateSentence(string s, int k) {
        int space=0;
        string ans = "";
        for(int i=0;i<s.size();i++){
            if(isspace(s[i])){
                space++;
            }
            if(space < k){
                ans += s[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};
