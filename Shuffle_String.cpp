class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result =s;
        for(int i=0; i<indices.size(); i++){
            int r = indices[i];
            result[r] = s[i];
        }
        return result;
    }
};
