class Solution {
public:
    int balancedStringSplit(string s) {
        int R=0,L=0,count=0;
        for(int i=0;i<s.size();i++){
            if(s[i] == 'R'){
                R+=1;
            }
            else{
                L+=1;
            }
            
            if(R!=0 && R==L){
                count++;
                R=0;
                L=0;
            }
        }
        return count;
    }
};
