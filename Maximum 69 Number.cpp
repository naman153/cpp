class Solution {
public:
    int maximum69Number (int num) {
        int nums[4];
        int i=0;
        while(num>0){
            nums[i] = num%10;
            num = int(num/10);
            i++;
        }
        i=0;
        for(int j=3; j>=0; j--){
            if(nums[j] == 6 || nums[j] == 9){
                if(nums[j] ==6 && i==0){
                    nums[j] = 9;
                    i++;  
                }
            num = num * 10 + nums[j];
            }
        }
        
        return num;
    }
};
