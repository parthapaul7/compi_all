#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    long long sum =0;
    for(int i=0;i<n-2;i++){
        sum += a[i];
    }

    long long ans = a[n-1]-(a[n-2]-sum);

    cout<<ans<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}