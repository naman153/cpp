class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        x=x^y;
        while(x){
            c++;
            x=x&(x-1);
        }
        return c;
        
    }
};
