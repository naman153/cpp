class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res;
        while(columnNumber){
            int rem = columnNumber%26;
            if(rem == 0){
                res.insert(res.begin(),'Z');
                columnNumber = columnNumber/26 - 1;
            }
            else{
                res.insert(res.begin(), 'A' + rem - 1);
                columnNumber = columnNumber/26;
            }
            
        }
        return res;
    }
};
