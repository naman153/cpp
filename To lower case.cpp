class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0; i<str.size(); i++){
            if(str[i]>=65 && str[i]<=92){
              str[i] = str[i] + 32;
            }
        }
        return str;
    }
};