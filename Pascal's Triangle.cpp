class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> temp={};
        temp.push_back(1);
        ans.push_back(temp);
        if(numRows == 1){
            return ans;
        }
        temp.clear();
        temp.push_back(1);
        temp.push_back(1);
        ans.push_back(temp);
        temp.clear();
        for(int i=1;i<=numRows-2;i++){
            temp.push_back(1);
            for(int j=0;j<=i;j++){
                if(j+1 < ans[i].size()){
                    temp.push_back(ans[i][j]+ans[i][j+1]);
                }
            }
            temp.push_back(1);
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};
