class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result(nums1.size()|nums2.size());
        vector<int>:: iterator end= set_intersection(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(),result.begin());
        auto it=unique(result.begin(), end);
        result.erase(it, result.end());
        return result;
    }
};
