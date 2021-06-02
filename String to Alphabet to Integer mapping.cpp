class Solution {
public:
    string freqAlphabets(string s) {
        string st="";
        char arr[27]={'1','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};        
        for(int i=s.size()-1;i>=0;){
            if(s[i]=='#'){
                int a = s[i-1]-'0';
                int b = s[i-2]-'0';
                int num = b*10 + a;
                st+=arr[num];
                i-=3;
            }
            else{
                int a = s[i]-'0';
                st+=arr[a];
                i-=1;
            }
        }
        reverse(st.begin(), st.end());
        
        return st;
        
    }
};
