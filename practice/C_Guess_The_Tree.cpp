#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    set<pair<int,int>> ans;
    for(int i=1;i<n+1;i++){
        for(int j=i+1;j<n+1;j++){
            cout<<"? "<<i<<" "<<j<<endl;
            cout.flush();
            int val;
            cin>>val;

            if(val == 1 && i!=j){
                ans.insert({i,j});
            }
        }

    }

    cout<<"!"<<" ";
    for(auto it:ans){
        cout<<it.first<<" "<<it.second<<endl;
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