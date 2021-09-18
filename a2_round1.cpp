#include<bits/stdc++.h>
using namespace std;
long long subString(string s, int n){
    
    long long total_count=0;
    for (int len = 2; len <= n; len++)
    {   
        for (int i = 0; i <= n - len; i++)
        { 
            int j = i + len - 1; 
            char current=' ';
            long long count=0;          
            for (int k = i; k <= j; k++){
                if(current==' ' && s[k]!='F'){
                    current=s[k];
                }
                else if(current != s[k] && s[k] !='F'){
                    current=s[k];
                    count++;
                }
            }
            total_count+=count;
             
        }
    }
    return total_count;
}


int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r",stdin);
        freopen("output1.txt","w", stdout);
    #endif

    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        long long ans= subString(s,n);
        cout<<"Case #"<<i+1<<": "<<(ans%1000000007)<<"\n";

    }

    return 0;
} 