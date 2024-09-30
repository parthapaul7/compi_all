#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second>b.second;
}
void solve(){
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    // find the maximum occurances of a number
    unordered_map<int,int> mp;
    vector<pair<int,int>> v;
    int zeros = 0;

    for(int i=0;i<n;i++){
        mp[A[i]]++;
        if(A[i]==0){
            zeros++;
        }
    }

    for(auto it:mp){    
        if(it.first!=0)
            v.push_back(it);
    }

    
    int max_occ = 0;
    int max_num = 0;
    mp.erase(0);
    if(mp.size()==0){
        cout<<zeros*(zeros-1)/2<<endl;
        return;
    }

    for(auto it:mp){
        if(it.second>max_occ){
            max_occ = it.second;
            max_num = it.first;
        }
    }


    
    
    int ans = (max_occ+zeros)*(max_occ+zeros-1)/2;

    for(auto it:mp){
        if(it.second>=2 && it.first!=max_num){
            ans+=it.second*(it.second-1)/2;
        }
    }

    cout<<ans<<endl;
    // find the maximum occurance of a number
    
    


    
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}