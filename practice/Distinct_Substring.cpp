#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;

    int minLen = k*(k+1)/2 + (k-1);

    if(n<minLen){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}