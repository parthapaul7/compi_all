#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(s[0] == '1' && s[n-1] == '1'){
        cout<<0<<endl;
        return;
    }

    

    if(s[0] == '0' || s[n-1] == '0'){
        cout<<1<<endl;
        return;
    }
    else{
        cout<<2<<endl;
        return;
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}