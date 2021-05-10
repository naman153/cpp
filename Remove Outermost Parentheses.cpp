class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans;
        int c=0;
        for(int i=0; i<S.size(); i++){
            if(S[i] == '('){
                ans.push_back(S[i]);
                if(c == 0)
                    ans.pop_back();
                c++;
            }
            if(S[i] == ')' ){
                c--;
                ans.push_back(S[i]);
                if(c == 0)
                    ans.pop_back();
            }
            
            
        }
        return ans;
    }
};
