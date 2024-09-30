#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,l,r;
    cin>>n>>l>>r;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int maxHappiness = 0;
    int minHappiness = 0;
    int currentHappiness = 0;

    for(int i=0;i<n;i++){
        if(v[i]>=l && v[i]<=r){
            currentHappiness++;
            maxHappiness = max(maxHappiness,currentHappiness);
        }else{
            currentHappiness--;
            minHappiness= min(minHappiness,currentHappiness);
        }
    }

    cout<<maxHappiness<<" "<<minHappiness<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}