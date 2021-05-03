class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0, product=1, l=n;
        while(l>0){
            sum += l%10;
            product *= l%10;
            l=l/10;
        }
        return product-sum;
    }
};
