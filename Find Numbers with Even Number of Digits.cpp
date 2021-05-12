class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            int temp=0;
            while(nums[i]>0){
                nums[i]=nums[i]/10;
                temp++;
            }
            if(temp%2 == 0)
                result++;
        }
        return result;
    }
};
