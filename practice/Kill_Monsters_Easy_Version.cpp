#include <bits/stdc++.h>
using namespace std;

int dpSolve(vector<int>& a,int curr,int x,int k){
    if(curr>a.size())
        return 0;
}
void solve(){
    int n,x,k;
    cin>>n>>x>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),greater<int>());

    if(x*k<a[n-1]){
        cout<<0<<endl;
        return;
    }

    int ans=0;

    // case 1
    if(a[0]>x && a[0]<x*k){
        x*=k;
        k=1;
    }
    for(int i=0;i<n;i++){
        if(a[i]<x){
            ans++;
            x=a[i];
        }else if(a[i]<x*k){
            ans++;
            x=a[i];
            k=1;
        }
    }

    // case 2
    int ans2 = 0;
    for(int i=0;i<n;i++){
        if(a[i]<x){
            ans2++;
            x=a[i];
        }else if(a[i]<x*k){
            ans2++;
            x=a[i];
            k=1;
        }
    }

    cout<<max(ans,ans2)<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}