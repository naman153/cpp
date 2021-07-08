class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result(nums1.size()|nums2.size());
        vector<int>:: iterator end= set_intersection(nums1.begin(), nums1.end(),nums2.begin(), nums2.end(),result.begin());
        result.erase(end, result.end());
        return result;
    }
};
