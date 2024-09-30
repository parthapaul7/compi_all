#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> inorder(n+1,0);

    for(int i=1;i<n;i++){
        int u,v;
        cin>>u>>v;

        inorder[v]++;
        inorder[u]++;
    }

    int ans=0;
    for(int i=1;i<=n;i++){
        // cout<<inorder[i]<<" ";
        if(inorder[i]>1){
            ans+=2;
        }else{
            ans+=3;
        }
    }

    cout<<ans<<endl;
    
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}