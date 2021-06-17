class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<pair<int,int>> ans;
        for(int i=0;i<arr.size();i++){
            bitset<14> b1(arr[i]);
            ans.push_back(pair(b1.count(),arr[i]));
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            arr[i]=ans[i].second;
        }
        return arr;
    }
};
