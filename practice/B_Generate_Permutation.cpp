#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%2 == 0){
        cout<<-1<<endl;
        return;
    }
    list<int> a;
    for(int i=1;i<n+1;i++){
        if((i&1)) a.push_back(i);
        else a.push_front(i);
    }

    for(auto it:a){
        cout<<it<<" ";
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