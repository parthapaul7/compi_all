#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> apa(n,0);
    vector<int> app(n,0);
    vector<int> dpa(n,0);
    vector<int> dpp(n,0);

    for(int i=0;i<n;i++){
        cin>>apa[i];
    }
    for(int i=0;i<n;i++){
        cin>>app[i];
    }
    for(int i=0;i<n;i++){
        cin>>dpa[i];
    }
    for(int i=0;i<n;i++){
        cin>>dpp[i];
    }

    // find the sum of apa and app
    long long sum_apa = 0,sum_app = 0,sum_dpa = 0,sum_dpp = 0;
    for(int i=0;i<n;i++){
        sum_apa += apa[i];
        sum_app += app[i];
        sum_dpp += dpp[i];
        sum_dpa += dpa[i];
    }
    // cout<<sum_apa<<" "<<sum_app<<" "<<sum_dpa<<" "<<sum_dpp<<endl;
    if(sum_apa>sum_app && sum_dpa>sum_dpp){
        cout<<"A"<<endl;
    }else if(sum_apa<sum_app && sum_dpa<sum_dpp){
        cout<<"P"<<endl;
    }else{
        cout<<"DRAW"<<endl;
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}