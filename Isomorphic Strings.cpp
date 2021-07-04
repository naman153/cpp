class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<char> ans;
        vector<char> ans1;
        ans.push_back(s[0]);
        ans1.push_back(t[0]);
        for(int i=1;i<s.size();i++){
            auto it = find(ans.begin(), ans.end(),s[i])-ans.begin();
            if((it < ans.size()) && ((s[i]==ans[it]) && t[i]!=ans1[it])){
                return 0;
            }
            it = find(ans1.begin(), ans1.end(),t[i])-ans1.begin();
            if((it < ans1.size()) && ((s[i]!=ans[it]) && t[i]==ans1[it])){
                return 0;
            }
            
            ans.push_back(s[i]);
            ans1.push_back(t[i]);
        }
        return true;
    }
};
