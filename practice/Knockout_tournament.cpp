#include <bits/stdc++.h>
using namespace std;
void solve(){
    vector<int> v(16);
    for(int i=0;i<16;i++){
        cin>>v[i];
    }

    vector<int> v1 = v;
    unordered_map<int,int> m;

    for(int i=0;i<16;i++){
        m[v[i]] = 0;
    }
    
    sort(v1.begin(),v1.end());

    int min = v1[0];
    int max = v1[15];

    m[v1[15]] = 4;
    for(int i=1;i<15;i++){
        if(i<3){
            m[v1[i]] = 1;
        }
        if(i>=3 && i<7){
            m[v1[i]] = 2;
        }
        if(i>=7 && i<15){
            m[v1[i]] = 3;
        }
    }

   for(int i=0;i<16;i++){
        cout<<m[v[i]]<<" ";
   }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}