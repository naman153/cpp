class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        int temp= first;
        res.push_back(first);
        for(int i=0; i<encoded.size(); i++){
            temp = encoded[i]^temp;
            res.push_back(temp);
        }
        return res;
    }
};
