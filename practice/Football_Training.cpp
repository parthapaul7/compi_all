#include <bits/stdc++.h>
using namespace std;
void solve(){
    int x,y;
    cin>>x>>y;

    if(x>y){
        cout<<"FREEKICK"<<endl;
    }else{
        cout<<"PENALTY"<<endl;
    }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}