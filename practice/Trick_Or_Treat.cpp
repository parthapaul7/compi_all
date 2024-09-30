#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;

    vector<int> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    int ans = 0; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           bool cond = (a[i]+b[j])%m == 0; 

           if(cond){
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