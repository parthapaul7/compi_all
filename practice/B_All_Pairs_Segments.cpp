#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> a(n),query(q);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<q;i++){
        cin>>query[i];
    }

    unordered_map<int,pair<int,int>> mp;
    for(int i=0;i<n;i++){
        int num = (long long)(n-i)*(i) + (n-i-1);
        
        mp[num].first++;

    }

    for(int i=0;i<q;i++){
        int b= n-2;
        int c = query[i]+1-n;
        int a = 1;

        // find the integer solution ax^2-bx+c has integer solution
        // find the solution
        

        
    
    }

    
    
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}