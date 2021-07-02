class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> bits(n);
        string temp=bits.to_string();
        reverse(temp.begin(),temp.end());
        bitset<32> bit(temp);
        return bit.to_ulong();
    }
};
