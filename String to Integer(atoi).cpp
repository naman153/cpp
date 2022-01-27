class Solution {
public:
    int myAtoi(string s) {
        int n=0;
        long int d=0;
        for(int i=0;i<s.size();i++){
            while(s[i]==' '){
                i++;
            }
            if(s[i]=='+'){
                n=0;
                i++;
            }
            else if(s[i]=='-'){
                n=1;
                i++;
            }
            if(isalpha(s[i]) && d==0){
                return 0;
            }
            while(isdigit(s[i]) && d>=-2147483648 && d<=2147483647){
                d=((d * 10)+(s[i]-48));
                i++;
            }
            if(!isdigit(s[i]) &&i<s.size()){
                if(n==1){
                    d=0-d;
                }
                if(d<-2147483648){
                    return -2147483648;
                }
                if(d>2147483647){
                    return 2147483647;
                }
                return d;
            }
        }
        if(n==1){
            d=0-d;
        }
        if(d<-2147483648){
            return -2147483648;
        }
        if(d>2147483647){
            return 2147483647;
        }
        return d;
    }
};
