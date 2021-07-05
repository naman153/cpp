class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans={};
        if(nums.size()==1){
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){
                ans.push_back(to_string(nums[i]));
            }
            else if(nums[i]+1 != nums[i+1]){
                ans.push_back(to_string(nums[i]));
            }
            else{
                string temp=to_string(nums[i]);
                temp+="->";
                while((i+1 != nums.size()) && nums[i]+1 == nums[i+1]){
                        i++;
                }
                temp+=to_string(nums[i]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
