class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,bool> m;
        
        for(int i = 0;i < sentence.length();i++)
            m[sentence[i]] = true;
        
        return m.size() == 26 ? 1 : 0;
    }
};
