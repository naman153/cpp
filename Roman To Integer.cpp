class Solution {
public:
    int cti(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
    int romanToInt(string s) {
        int ans=cti(s[0]);
        for(int i=1;i<s.size();i++){
            int curr=cti(s[i]),prev=cti(s[i-1]);
            if(curr <= prev){
                ans+=curr;
            }
            else{
                ans= ans + curr-(prev*2);
            }
        }
        return ans;
    }
};
