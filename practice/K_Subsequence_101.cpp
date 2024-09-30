#include <bits/stdc++.h>
using namespace std;
int dp_solve(vector<int>& a,int curr, int k, int size, vector<vector<int>> &dp){
    // base case
    if(curr==a.size() || k<=0){
        return 0;
    }

    

    // include 
    int include =0;
    if(k == 1 || k == size)
        include = a[curr]+dp_solve(a,curr+1,k-1,size,dp);
    else
        include = 2*a[curr]+dp_solve(a,curr+1,k-1,size,dp);
    // exclude
    int exclude = dp_solve(a,curr+1,k,size,dp);


    return max(include,exclude);
}
void solve(){
    int n,k;
    cin>>n>>k;

    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    vector<int> a(n-1,0);
    for(int i=0;i<n-1;i++){
        a[i]=v[i+1]+v[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
    cout<<dp_solve(v,0,k,k,dp)<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}