class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int a= *max_element(nums.begin(), nums.end());
        auto it= find(nums.begin(), nums.end(),a);
        return it-nums.begin();
    }
};
