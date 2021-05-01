class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int largest = *max_element(candies.begin(), candies.end());
        vector<bool> result;
        for (int i=0; i < candies.size(); i++){
            if((candies.at(i) + extraCandies) < largest ){
                result.push_back(false);
            }
            else{
                result.push_back(true);
            }
        }
        cout<<largest;
        return result;
    }
};
