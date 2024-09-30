#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 201;
vector<bool> is_prime(MAX_N, true);

void sieve() {
    is_prime[0] = is_prime[1] = false;  // 0 and 1 are not primes.
    for (int i = 2; i * i <= MAX_N; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j < MAX_N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

bool isPrime(int n) {
    return is_prime[n];
}

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    map<int,int> m;

    for(int i=0;i<n;i++){
        if(m.find(v[i])!=m.end() && v[i] != 1){
            cout<<m[v[i]]+1<<" "<<i+1<<endl;
            return;
        }
        m[v[i]]=i;
    }


    for(auto x:m){
        for(auto y:m){
            if(x.first!=y.first && !isPrime(x.first+y.first)){
                cout<<x.second+1<<" "<<y.second+1<<endl;
                return;
            }
        }
    }
    
    cout<<-1<<endl;
    // for (int i = 0; i < n; i++) {
    //     for (int j = i + 1; j < n; j++) {
    //         if (!isPrime(v[i] + v[j])) {
    //             cout << i + 1 << " " << j + 1 << endl;
    //             return;
    //         }
    //     }
    // }

}

int main() {
    sieve();  // Precompute prime numbers.
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
