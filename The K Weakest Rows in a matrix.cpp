class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int, int>> ans={};
        for(int i=0;i<mat.size();i++){
            int counti= count(mat[i].begin(), mat[i].end(),1);
            ans.push_back(make_pair(counti, i));
        }
        sort(ans.begin(),ans.end());
        vector<int> ans1={};
        for(int i=0;i<k;i++){
            ans1.push_back(ans[i].second);
        }
        return ans1;
    }
};
