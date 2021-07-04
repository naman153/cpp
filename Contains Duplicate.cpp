class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        auto it= unique(nums.begin(), nums.end())-nums.begin();
        return (it <= nums.size()-1);
    }
};
