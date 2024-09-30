#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,n;
    cin>>a>>b>>n;

    int rect = a*b;
    int sq = n*n;

    if(rect<=sq){
        cout<<0<<endl;
        return;
    }
    
    if(a>sq && b>sq){
        cout<<2<<endl;
        return;
    }
    
    
    cout<<1<<endl;
    return;
    


}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}