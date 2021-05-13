class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int max=0, result=0; 
        for(int i=0; i<rectangles.size(); i++){
            int temp = 0;
            (rectangles[i][0] < rectangles[i][1]) ?  temp=rectangles[i][0] : temp=rectangles[i][1];
            if(temp == max){
                result++;
            }
            if(temp > max ){
                max=temp;
                result = 1;
            }
        }
        return result;
    }
};
