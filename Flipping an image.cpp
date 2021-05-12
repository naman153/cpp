class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size()/2;j++){
                int temp = image[i][j];
                image[i][j] = image[i][image[i].size()-1-j];
                image[i][image[i].size()-j-1] = temp;
            }
        }
        for(int i=0;i<image.size();i++){
            for(int j=0;j<image.size();j++){
                (image[i][j] == 0 ) ? image[i][j] = 1 : image[i][j] = 0;
            }
        }
        return image;
    }
};
