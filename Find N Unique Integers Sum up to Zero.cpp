class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> sum(n);
        if(n%2==0){
            for(int i=0;i<n;i+=2){
                sum[i] = (i+1);
                sum[i+1] = (0-i-1);
            }
        }
        else{
            for(int i=0;i<n-1;i+=2){
                sum[i] = (i+1);
                sum[i+1] = (0-i-1);
            }
            sum[n-1] =0;
        }
        return sum;
    }
};
