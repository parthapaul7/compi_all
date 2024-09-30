#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    long long  ans =0;
    for(int i=1;i<=n;i++){
        if(a[i] == 1){
            ans += n;
            continue;
        }
        for(int j=1;j<=n;j++){
            // compare
            if(a[i] > a[j]) continue;
            if(j*log(a[i]) <= log(a[j])){
                ans++;
            }
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