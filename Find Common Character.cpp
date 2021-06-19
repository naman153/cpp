class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        for(int i=0;i<words[0].size();i++){
            int temp=1;
            for(int j=1;j<words.size();j++){
                for(int k=0;k<words[j].size();k++){
                    if(words[0][i] == words[j][k]){
                        temp++;
                        words[j][k]='0';
                        break;
                    }
                }
            }
            if(temp == words.size()){
                string s(1,words[0][i]);
                ans.push_back(s);
            }
        }
        return ans;
    }
};
