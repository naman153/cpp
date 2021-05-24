class Solution {
public:
    bool judgeCircle(string moves) {
        if((count(moves.begin(),moves.end(),'R') == count(moves.begin(),moves.end(),'L'))  && (count(moves.begin(),moves.end(),'U') == count(moves.begin(),moves.end(),'D')))
            return true;
        return false;
    }
};
