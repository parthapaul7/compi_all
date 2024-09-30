#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int> a,pair<int,int> b){
    return a.first<b.first;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].first;
    }
    for(int i=0;i<n;i++){
        cin>>a[i].second;
    }

    sort(a.begin(),a.end(),cmp);

    vector<long double> dp(n,0);

    for(int i=0;i<n;i++){
        dp[i]= (long double)a[i].first/(long double)a[i].second;
    }

    int ans=0;
    for(int i=n-2;i>=0;i--){
        if(dp[i]>dp[i+1]){
            dp[i]=dp[i+1];
            ans++;
        }
    }

    cout<<n-ans<<endl;

    

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}