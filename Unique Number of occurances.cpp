class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> arr1 = arr;
        vector<int> ans={};
        sort(arr.begin(), arr.end());
        auto ip= unique(arr.begin(), arr.end());
        arr.resize(std::distance(arr.begin(), ip));
        
        for(int i=0; i < arr.size();i++){
            int counti = count(arr1.begin(), arr1.end(),arr[i]);
            ans.push_back(counti);
        }
        
        arr1=ans;
        sort(ans.begin(), ans.end());
        auto it= unique(ans.begin(), ans.end());
        ans.resize(std::distance(ans.begin(), it));
        
        
        return (arr1.size() == ans.size());
    }
};
