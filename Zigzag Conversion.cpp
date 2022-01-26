class Solution {
public:
    string convert(string s, int numRows) {
        string ans="";
        if(numRows==1){
            return s;
        }
        vector<vector<char>> a(numRows);
        int j=0;
        int f=1;
        for(int i=0;i<s.size();i++){
            if(f==1){
                a[j].push_back(s[i]);
                j++;
                if(j==numRows){
                    j--;
                    j--;
                    f=0;
                }
            }
            else{
                a[j].push_back(s[i]);
                j--;
                if(j==-1){
                    j++;
                    j++;
                    f=1;
                }
            }
            
        }
        
        for(int i=0;i<a.size();i++){
            for(int j=0;j<a[i].size();j++){
                ans+=a[i][j];
            }
        }
        return ans;
    }
};
