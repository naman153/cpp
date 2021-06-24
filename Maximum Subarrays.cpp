class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxn=nums[0];
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                maxn = max(maxn,sum);
            }
        }
        return maxn;
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxn=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum= max(nums[i], sum+nums[i]);
            maxn = max(maxn,sum);
        }
        return maxn;
    }
};
