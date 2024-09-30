#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    // check if abc is a triangle

    if(a+b+1>=c && b+c+1>=a && c+a+1>=b){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}