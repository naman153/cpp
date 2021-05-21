class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(count(nums.begin(), nums.end(), nums[i]) != 1){
                return nums[i];
                break;
            }
        }
        return 0;
    }
};
