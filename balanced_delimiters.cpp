#include<bits/stdc++.h>
using namespace std;

int check_delimeter(string s){
    stack<char> check;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{' || s[i]=='<'){
            check.push(s[i]);
        }
        else if(check.empty() && (s[i]==')' || s[i]==']' || s[i]=='}' || s[i]=='>')){
            return 0;
        }
        else if((check.top()=='(' && s[i]==')') || (check.top()=='[' && s[i]==']') || (check.top()=='{' && s[i]=='}') || (check.top()=='<' && s[i]=='>')){
            check.pop();
        }
        else{
            return 0;
        }
    }
    if(!check.empty()){
        return 0;
    }
    return 1;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input2.txt","r",stdin);
        freopen("output2.txt","w", stdout);
    #endif

    string s;
    cin>>s;
    bool ans=check_delimeter(s);
    if(ans==1){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
    
    return 0;
}