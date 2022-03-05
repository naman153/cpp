#include<bits/stdc++.h>
using namespace std;
int ans=0;
int reverse_n(int no){
    if(no>0){
        ans= (ans*10) +(no%10);
    }
    else{
        return 0;
    }
    return reverse_n(no/10);
}
int main(){
    int n;
    cin>>n;
    reverse_n(n);
    
    cout<<ans;
    return 0;
}