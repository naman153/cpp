class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        for(int i=1;i<=target[target.size()-1];i++){
            auto it=find(target.begin(),target.end(),i);
            if( it == target.end()){
                ans.push_back("Push");
                ans.push_back("Pop");
            }
            else{
                ans.push_back("Push");
            }
        }
        return ans;
    }
};
