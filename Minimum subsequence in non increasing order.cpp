class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int total_sum=0;
        int sum_result=0;
        for(int i=0;i<nums.size();i++){
            total_sum+=nums[i];
        }
        sort(nums.begin(), nums.end(), greater<int>());
        int i=0;
        while(sum_result <= total_sum){
            sum_result+=nums[i];
            total_sum-=nums[i];  
            i++;
        }
        nums.erase(nums.begin()+i, nums.end());
        return nums;
    }
};
