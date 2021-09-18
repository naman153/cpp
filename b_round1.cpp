#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input1.txt","r", stdin);
        freopen("output1.txt","w",stdout);
    #endif

    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if((m+n-1)> a || (m+n-1) >b){
            cout<<"Case #"<<i+1<<": Impossible"<<"\n";
        }
        else{
            vector<vector<int>> ans(n,vector<int>(m,1000));
            cout<<"Case #"<<i+1<<": Possible"<<"\n";
        
            int left=a-(int(a/(m+n-1))*(m+n-1));
            int up=int(left/(m-1));
            int right=b-(int(a/(m+n-1))*(m+n-1));
            int down;
            if(right>=0){
                down=int(right/(m-1));
            }
            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    if(j==n-1||k==0||k==m-1){
                        ans[j][k]=1;
                    }
                }
            }
            ans[0][0]+=a-(n+m-1);
            ans[0][m-1]+=b-(n+m-1);



            for(int j=0;j<n;j++){
                for(int k=0;k<m;k++){
                    cout<<ans[j][k];
                    if(k<m-1){
                        cout<<" ";
                    }
                }
                cout<<"\n";
            }
        }

    }

    return 0;
}