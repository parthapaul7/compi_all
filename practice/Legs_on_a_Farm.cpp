#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    int ans = n/4;

    if(n != 0 && n%4 != 0){
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