#include<string>
class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        string rev_s= s;
        int n= rev_s.size()-1;
        reverse(rev_s.begin(), rev_s.end());
        vector<int> ans;
        
        for(int i=0;i<s.size();i++){
            int f= find(s.begin()+i ,s.end(), c)-s.begin();
            int b= find(rev_s.end()-i-1, rev_s.end(),c)-rev_s.begin();
            if(b!=rev_s.size() && f!=s.size())
                ans.push_back(min(abs((n-b-i)),abs(f-i)));
            else if(b==rev_s.size())
                ans.push_back(abs(f-i));
            else if(f==s.size())
                ans.push_back(abs(n-b-i));

        }
        return ans;
    }
};
