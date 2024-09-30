#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    map<int,int> mp;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            mp[a[i]^a[j]]++;
        }
    }

    int ans=0;
    for(auto x:mp){
        int cnt = x.second;
        // cout<<cnt<<endl;
        if(cnt>1){
            ans += cnt*(cnt-1)/2; 
        }
    }

    cout<<ans*8<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}