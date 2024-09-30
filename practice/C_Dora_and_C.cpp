#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> A(n);
    int adding = __gcd(a,b);

    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        A[i] = num%adding;
    }
    sort(A.begin(),A.end());
    int mini = A[0];
    int maxi = A[n-1];

    int preDiff = maxi - mini;
    // int ans = 0;
    for(int i=1;i<n;i++){
        preDiff = min(preDiff,A[i-1]-A[i]+adding);
        // cout<<preDiff<<endl;
    }
    
    cout<<preDiff<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}