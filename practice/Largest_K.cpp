#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    unordered_set<int> s;

    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    int distinct = s.size();
    int temp = n/distinct; 

    cout<<temp*distinct<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}