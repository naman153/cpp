class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(), nums.end());
        return nums[int(nums.size()/2)];
    }
};
//////////////////////////////////////////////////////////////////////
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int votes=0;
        int candidate=0;


        for(int i=0;i<nums.size();i++){
            if(votes==0){
                candidate=nums[i];
            }

            if(candidate==nums[i]){
                votes++;
            }
            else
                votes--;
        }
        return candidate;
    }
};


