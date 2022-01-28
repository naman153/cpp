class Solution {
public:
    int maxArea(vector<int>& height) {
        long int ans=0;
        int h=INT_MIN;
        for(int i=0;i<height.size();i++){
            if(h>=height[i]){
                continue;
            }
            for(int j=i+1;j<height.size();j++){
                long int temp=(min(height[i], height[j]))*(j-i);
                if(ans<temp){
                    ans=temp;
                    h=min(height[i], height[j]);
                }
            }
        }
        return ans;
    }
};
