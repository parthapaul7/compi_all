#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;


    if(n==2){
        cout<<1<<" "<<2<<endl;
        return;
    } 

    vector<int> a(n);
    for(int i=0;i<n;i+=2){
        a[i]=i/2 + 1;
    }

    for(int i=1;i<n;i+=2){
        a[i]=n-(i/2);
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}