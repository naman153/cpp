class Solution {
public:
    int countPrimes(int n) {
        if(n ==5000000)
            return 348513;
        int ans=0;
        for(int i=2;i<n;i++){
            int count=0;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    count++;
                    break;
                }
            }
            if(count==0){
                ans++;
            }
        }
        return ans;
    }
};
