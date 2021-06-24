class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add=1;
        for(int i= digits.size()-1; i>=0;i--){
            if((digits[i]+1)<=9){
                digits[i]++;
                add=0;
                break;
            }
            else if((digits[i]+1)>9){
                digits[i]=0;
                add=1;
            }
            
        }
        if(add==1){
            digits.insert(digits.begin(),1);
        }
        
        return digits;
    }
};
