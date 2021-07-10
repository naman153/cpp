class Solution {
public:
    string toHex(int num) {
        stringstream ss;
        ss << std::hex << num ;
        return ss.str();
    }
};
