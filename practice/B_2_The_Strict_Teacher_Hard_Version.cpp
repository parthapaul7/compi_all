#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, q;
    cin >> n >> m >> q;

    set<int> b;
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        b.insert(x);
    }

    while(q>0){
        int a;
        cin >> a;

        if(a < *b.begin()) {
            cout << *b.begin() - 1 << endl;
        }
        else if(a > *b.rbegin()) {
            cout << n - *b.rbegin() << endl;
        }
        else {
            auto next_it = b.upper_bound(a);
            int lower_val = *prev(next_it);
            int upper_val = *next_it;

            int lower_diff = abs(a - lower_val);
            int upper_diff = abs(upper_val - a);

            cout << (lower_diff + upper_diff) / 2 << endl;
        }

        q--;
    }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
