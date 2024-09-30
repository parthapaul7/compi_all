#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long mod_exp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) { // If exp is odd
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2;
    }
    return result;
}

void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    long long prodSum = 0;
    long long sum = n*(n-1)/2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            prodSum += (a[i]*a[j])%mod;
        }
    }

    long long Q_inv = mod_exp(sum, mod - 2, mod);
    cout<<(prodSum*Q_inv)%mod<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}