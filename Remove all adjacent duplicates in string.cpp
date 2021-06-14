class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        while(i < s.size()){
            if(s[i] == s[i+1] && i>0){
                s.erase(s.begin()+i, s.begin()+i+2);
                i--;
            }
            else{
                i++;
            }
        }
        if(s[0]==s[1]){
                s.erase(s.begin(), s.begin()+2);
        }
        return s;
    }
};
