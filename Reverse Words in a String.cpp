class Solution {
public:
    string reverseWords(string s) {
        for(int i=0;i<s.size(); ){
            int j=i;
            while(j<s.size()){
                if(s[j] != ' '){
                    j++;
                }
                else
                    break;
            }
            
            reverse(s.begin()+i, s.begin()+j);
            i = j+1;
        }
        return s;
    }
};
