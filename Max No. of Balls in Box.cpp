class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> ans;
        int max=0;
        for(int i=lowLimit; i<=highLimit; i++){
            int n=i;
            int sum=0;
            while(n != 0){
                sum+=int(n%10);
                n= int(n/10);
            }
            ans.push_back(sum);
        }
        sort(ans.begin(), ans.end());
        for(int i=0;i<ans.size(); ){
            int countn = count(ans.begin(),ans.end(),ans[i]);
            (max < countn)? max=countn : max=max;
            i+=countn;
        }
        return max;
    }
};
--------------------------------------------------------------------------------------------------------------------------------------------

class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        int ans[45]={0};
        for(int i=lowLimit; i<=highLimit; i++){
            int n=i;
            int sum=0;
            while(n != 0){
                sum+=int(n%10);
                n= int(n/10);
            }ans[sum-1]++;
        }
        return *max_element(ans, ans+45);
    }
};
