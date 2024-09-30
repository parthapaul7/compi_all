#include <bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    long long ans =0;
    
    long long k=l;
    for(int i=1;k<=r;i++){
        k+=i;
        ans++;
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