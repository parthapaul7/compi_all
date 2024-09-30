#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;

    if(a%2 ==0 && b%2==0){
        cout<<"YES"<<endl;
        return;
    }

    if(b&1 && a%2==0 && a!=0){
        cout<<"YES"<<endl;
        return;
    }

    if(a&1){
        cout<<"NO"<<endl;
        return;
    }

    // if(a&1 && b&1){
    //     cout<<"NO"<<endl;
    //     return;
    // }

    // if(a&1 && b%2==0){
    //     cout<<"NO"<<endl;
    //     return;
    // }
    cout<<"NO"<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}