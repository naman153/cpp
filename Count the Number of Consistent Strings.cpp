class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int allow[26] ={0};
        for(int i=0; i<allowed.size(); i++){
            allow[int(allowed[i] - 'a')] = 1;
        }
        
        int result=words.size();
        for(int i=0; i<words.size(); i++){
            for(int j=0;j<words[i].size(); j++){
                if(allow[int(words[i][j] - 'a')] == 0 ){
                    result--;
                    break;
                }
            }
            
        }
        return result;
    }
};
