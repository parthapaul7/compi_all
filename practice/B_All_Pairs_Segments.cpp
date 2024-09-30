#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n),query(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>query[i];
    }

    vector<long long> mp(1000000,0);
    for(int i=0;i<n;i++){
        mp[a[i]] = (long long)(n-i)*(i) + (n-i-1);
        int temp = a[i];
        while(i<n-1 && temp+1 != a[i+1]){
            temp++;
            mp[temp] = (long long)(n-i-1)*(i) + (n-i-1);
        }
    }

    for(auto it:mp){
        cout<<"-"<<it<<",";
    }
    cout<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}