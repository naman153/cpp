class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result=0;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1;j<nums.size(); j++){
                if(i<j && nums[i]==nums[j]){
                    result+=1;
                }
            }
        }
        return result;
    }
};