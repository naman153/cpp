class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int last=nums.size();
        int start=0;
        if(target>nums[nums.size()-1]){
            return nums.size();
        }
        if(target <nums[0]){
            return 0;
        }
        while(start<=last){
            int mid=(last+start)/2;
            if(target==nums[mid]){
                return mid;
            }
            else if(target>nums[mid] && target<nums[mid+1]){
                return mid+1;
            }
            else if(nums[mid]>target){
                last=mid-1;
            }
            else{
                start=start+1;
            }
        }
        return -1;
    }
};
