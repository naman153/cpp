class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        vector<int> temp={};
        temp.push_back(1);
        ans=temp;
        if(rowIndex == 0){
            return ans;
        }
        temp.clear();
        temp.push_back(1);
        temp.push_back(1);
        ans=temp;
        temp.clear();
        if(rowIndex==1)
            return ans;
        
        for(int i=1;i<=rowIndex-1;i++){
            temp.push_back(1);
            for(int j=0;j<=i;j++){
                if(j+1 < ans.size()){
                    temp.push_back(ans[j]+ans[j+1]);
                }
            }
            temp.push_back(1);
            ans=temp;
            temp.clear();
        }
        return ans;
    }
};
