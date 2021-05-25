class Solution {
public:
    vector<int> diStringMatch(string s) {
        int start=1, last=s.size();
        vector<int> ans;
        ans.push_back(0);
        for(int i=0; i < s.size(); i++){
            if(s[i] == 'I'  && (ans[i] < last+1)){
                ans.insert(ans.begin()+i+1,last);
                last--;
            }
            else if (s[i] == 'I' && !(ans[i] < last+1)){
                ans.insert(ans.begin()+i,start);
                start++;
            }
            else if(s[i] == 'D' && (ans[i] > start-1)){
                ans.insert(ans.begin()+i+1, start);
                start++;
            }
            else if(s[i] == 'D' && !(ans[i] > start-1)){
                ans.insert(ans.begin()+i, last);
                last--;
            }
        }
        return ans;
    }
};
