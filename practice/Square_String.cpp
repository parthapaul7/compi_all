#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long powerMod(long long a, long long b, long long mod) {
    long long result = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % mod;
        }
        b = b >> 1; // b = b / 2
        a = (a * a) % mod;
    }
    return result;
}

void solve(){

        int n;
        cin >> n;
        vector<long long> memo(n + 1, 0);

        for (int i = 1; i <= n; ++i) {
            memo[i] = (memo[i-1]*2 + (i-1)*(i-1)) % MOD;
        }

        long long weightedSum = 0;
        for (int i = 1; i <= n; ++i) {
            long long weight = powerMod(2, n - i, MOD);
            weightedSum = (weightedSum + memo[i] * weight) % MOD;
        }

        long long answer = (2 * weightedSum) % MOD;
        cout<<answer<<endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
