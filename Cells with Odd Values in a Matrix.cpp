class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int arrays[m][n];
        int result=0;
        
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                arrays[i][j] = 0;
            }
        }
        
        for(int i=0;i<indices.size();i++){
            for(int j=0; j<n; j++){
                arrays[indices[i][0]][j] = arrays[indices[i][0]][j] + 1; 
            }
            for(int j=0; j<m; j++){
                arrays[j][indices[i][1]] = arrays[j][indices[i][1]] + 1; 
            }
        }
        
        for(int i=0; i<m;i++){
            for(int j=0;j<n;j++){
                if(arrays[i][j]%2 == 1)
                    result++;
            }
        }
        
        return result;
    }
};
