class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        while(numbers[i] <= target){
            auto it= find(numbers.begin()+i+1, numbers.end(), target-numbers[i]);
            int n=it-numbers.begin();
            if(n!=numbers.size() && (numbers[i]+numbers[n] == target)){
                return {i+1,n+1};
            }
            i++;
        }
        return {1,2};
    }
};
