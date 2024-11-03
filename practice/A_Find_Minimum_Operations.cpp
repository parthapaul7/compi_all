#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    
    if(k==1 || k>n){
        cout<<n<<endl;
        return;
    }
    if(k==n){
        cout<<1<<endl;
        return;
    }
    
    int ans =0;
    while(n!=0){
        if(n%k!=0){
            ans+=n%k;
            n -= n%k;
        }else{
            n/=k;
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