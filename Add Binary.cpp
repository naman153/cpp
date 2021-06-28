class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()){
            return addBinary(b,a);
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        bool carry=0;
        int i=0;
        for(i; i<b.size(); i++){
            if(carry==0 && a[i]=='0' && b[i]=='0'){
                continue;
            }
            else if((carry==0 && a[i]=='0' && b[i]=='1') || (carry==1 && a[i]=='0' && b[i]=='0') || (carry==0 && a[i]=='1' && b[i]=='0')){
                a[i]='1';
                carry=0;
            }
            else if((carry==1 && a[i]=='1' && b[i]=='0') || (carry==0 && a[i]=='1' && b[i]=='1') || (carry==1 && a[i]=='0' && b[i]=='1')){
                a[i]='0';
                carry=1;
            }
            else if(carry==1 && a[i]=='1' && b[i]=='1'){
                a[i]='1';
                carry=1;
            }
        }
        if(carry == 1){
            for(i; i<a.size();i++){
                if(a[i]=='1'&& carry==1){
                    a[i]='0';
                    carry=1; 
                }
                else if(a[i]=='0'&& carry==1){
                    a[i]='1';
                    carry=0;
                }
            }
            if(carry == 1){
                a.push_back('1');
            }
        }
        reverse(a.begin(), a.end());
        return a;
    }
};
