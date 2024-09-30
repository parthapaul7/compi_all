#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(v[i]);
        if(s.size()>2){
            cout<<"NO"<<endl;
            return;
        }
    }

    if(s.size()==1){
        cout<<"YES"<<endl;
        return;
    }

    if(s.size()==2 && s.find(0)!=s.end()){
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}