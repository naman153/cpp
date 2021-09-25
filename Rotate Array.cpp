class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()<k){
            for(int i=0;i<k;i++){
                for(int j=nums.size()-1;j>0;j--){
                    swap(nums[j], nums[j-1]);
                }
            }
        }
        else{
            vector<int> temp(nums.end()-k, nums.end());
            nums.erase(nums.end()-k, nums.end());
            nums.insert(nums.begin(), temp.begin(), temp.end());
        }
        
    }
};
