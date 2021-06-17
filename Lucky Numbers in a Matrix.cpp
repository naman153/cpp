class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans={};
        for(int i=0;i<matrix.size();i++){
            int min = min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();
            int count=0;
            for(int k=0;k<matrix.size();k++){
                if(k==i){
                    continue;
                }
                else if(matrix[k][min] < matrix[i][min])
                    count++;
                else{
                    break;
                }
            }
            if(count == matrix.size()-1)
                ans.push_back(matrix[i][min]);
        }
        return ans;
    }
};
