#include <bits/stdc++.h>
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    int L,R;
    cin>>L>>R;

    if(l==L && r==R){
        // cout<<"both same"<<l<<r<<endl;
        cout<<r-l<<endl;
        return;
    }

    if(l==L || r==R){
        l = max(l,L);
        r = min(r,R);
        cout<<r-l+1<<endl;
        return;
    }
    l = max(l,L);
    r = min(r,R);

    int ans = r-l;
    if(ans<0){
        cout<<1<<endl;
        return;
    }

    // is one subset

    cout<<r-l+2<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}