class Solution {
public:
    int lengthOfLastWord(string s) {
        int sum=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] ==' ' && sum==0){
                continue;
            }
            else if(s[i] == ' '){
                break;
            }
            else{
                sum++;
            }
        }
        return sum;
    }
};
