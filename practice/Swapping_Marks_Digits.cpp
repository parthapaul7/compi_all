#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b;
    cin>>a>>b;


    int a1=0,b1=0;

    a1=(a%10)*10+a/10;
    b1=(b%10)*10+b/10;

    if(a1>b1 || a>b1 || a1>b || a>b){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}