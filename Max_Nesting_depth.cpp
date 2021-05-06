class Solution {
public:
    int maxDepth(string s) {
        int count = 0, max=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == '('){
                count++;
            }
            if(s[i] == ')'){
                if(max < count)
                    max= count;
            count--;
            }
        }
        return max;
    }
};
