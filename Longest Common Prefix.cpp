class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        for(int i=0;i<strs[0].size();i++){
            int n=0;
            for(int j=0;j<strs.size();j++){
                if(strs[0][i] == strs[j][i]){
                    n++;
                }
            }
            if(n == strs.size()){
                ans = ans + strs[0][i];
            }
            else
                break;
        }
        return ans;
    }
};
