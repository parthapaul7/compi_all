#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,m;
    cin>>n>>m;

    if(n<=m){
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<2*m+1<<endl;
    }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}