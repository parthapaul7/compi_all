#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    for(int i=1;i<=n;i++){
       int diff = i - a[i-1]; 

       if(diff<0){
           cout<<"NO"<<endl;
           return;
       }
    }

    cout<<"YES"<<endl;
    return;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}