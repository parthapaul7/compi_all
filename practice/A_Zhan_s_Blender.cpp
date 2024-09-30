#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;

    int num = min(x,y);

    int ans = n/num;

    if(n%num == 0){
        cout<<ans<<endl;
    }
    else{
        cout<<ans+1<<endl;
    }
    // cout<<n/num<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}