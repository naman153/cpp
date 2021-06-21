class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            int row=0;
            int column=0;
            for(int j=0;j<grid.size();j++){
                if(grid[i][j]>0)
                    ans++;
                row=max(grid[i][j], row);
                column= max(grid[j][i], column);
            }
            ans+= column+row;
        }
        return ans;
    }
};
