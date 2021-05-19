class Solution {
public:
    int reverse(int x) {
        int x1,rem=0,y=0;
        if(x==-2147483648)
            return 0;
        if(x<0&&x>-2147483648)
            x1=-x;
        else
            x1=x;
        while(x1!=0)
        {
            rem=x1%10;
            x1=x1/10;
            if(y>2147483647/10||(y==2147483647/10&&rem>7))
                return 0;
            y=y*10+rem;
        }
        if(x<0)
            return -y;
        else
            return y;
    }
};
