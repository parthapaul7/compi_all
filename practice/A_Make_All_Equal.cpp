#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>& a,pair<int,int>& b){
    return a.second>b.second;
}
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    vector<pair<int,int>> v;

    for(auto it:mp){
        v.push_back(it);
    }

    sort(v.begin(),v.end(),cmp);

    cout<<n-v[0].second<<endl;
    
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}