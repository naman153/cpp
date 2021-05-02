class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int result=0;
        for(int i=0; i<stones.size(); i++){
            for(int j=0; j<jewels.size(); j++){
                if(jewels[j] == stones[i]){
                    result += 1;
                }
            }
        } 
        return result;
    }
};
