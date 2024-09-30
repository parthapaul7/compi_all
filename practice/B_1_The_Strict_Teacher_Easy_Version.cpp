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

        int a;
        cin >> a;

        if(a < *b.begin()) {
            cout << *b.begin() - 1 << endl;
        }
        else if(a > *b.rbegin()) {
            cout << n - *b.rbegin() << endl;
        }
        else {
            auto it1 = b.upper_bound(a);
            int val1 = *prev(it1);
            int val2 = *it1;

            int diff1 = abs(a - val1);
            int diff2 = abs(val2 - a);

            cout << (diff1 + diff2) / 2 << endl;
        }
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
