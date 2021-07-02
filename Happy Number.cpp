class Solution {
public:
    int check(int x)
    {
        int sum=0;
        while(x!=0)
        {
            sum+=pow(x%10, 2);
            x/=10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow=check(n);
        int fast=check(slow);
        while(slow!=fast)
        {
            slow=check(slow);
            fast=check(check(fast)); 
        }
        return fast ==1;
    }
};
