class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left;i<=right;i++){
            int temp = i;
            while(temp > 0){
                if((temp%10) != 0 && i % (temp%10) == 0)
                    temp/=10;
                else
                    break;
            }
            if(temp<=0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
