#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    int sum=0;
    for(int i=0;i<n/2;i++){
        sum+=a[i];
    }   
    for(int i=(n/2+1);i<n;i++){
        sum-=a[i];
    }
    if(n%2 != 0){
        sum+=a[n/2];
    }else{
        sum-=a[n/2];
    }
    cout<<sum<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}