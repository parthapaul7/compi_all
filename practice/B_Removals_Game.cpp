#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    // check if every element is zero 
    if(n&1){
        if(a[n/2] != b[n/2]){
            cout<<"Alice"<<endl;
            return;
        }else{
            cout<<"Bob"<<endl;
            return;
        }
    }
    
    int ai = a[n/2] ;int bi= a[n/2 - 1];
    int Ai = b[n/2] ;int Bi= b[n/2 - 1];

    if((ai == Ai && bi==Bi) || (ai==Bi && bi==Ai)){
        cout<<"Bob"<<endl;
        return;
    }
    cout<<"Alice"<<endl;

    
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}