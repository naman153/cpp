class Solution {
public:
    int addDigits(int num) {
        while(num/10!=0){
            int i=num;
            num=0;
            while(i!=0){
                num=num+(i%10);
                i=i/10;
            }
        }
        return num;
    }
};
