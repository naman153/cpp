class Solution {
public:
    bool isPalindrome(int x) {
        long int temp = x, ans=0;
        while(temp>0){
            ans = (ans*10) + (temp%10);
            temp/=10;
            
        }
        return (ans==x);
    }
};
