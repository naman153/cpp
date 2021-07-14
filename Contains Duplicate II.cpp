
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        for(int i= 0; i<nums.size()-1;i++){
            int j;
            if((i+k) < nums.size()){
                auto it= find(nums.begin()+i+1, nums.begin()+i+k+1, nums[i]);
                j= it-nums.begin();
            }
            else{
                auto it= find(nums.begin()+i+1, nums.end(), nums[i]);
                j= it-nums.begin();
            }
            if((j <=  i+k) && (abs(j-i) <= k) && j != nums.size()){
                return true;
            }
        }
        return false; 
    }
};
