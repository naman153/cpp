#include<bits/stdc++.h>
using namespace std;

int change_hands(string s, int n){
    char current=' ';
    int count=0;
    for(int i=0;i<n;i++){
        if(current==' ' && s[i]!='F'){
            current=s[i];
        }
        else if(current != s[i] && s[i] !='F'){
            current=s[i];
            count++;
        }
    }

    return count;
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
        cout<<"Case #"<<i+1<<": "<<change_hands(s,n)<<endl;

    }

    return 0;
} 