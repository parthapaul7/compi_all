#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, h;
    cin >> n >> k >> h;
    long long ans = 0;

    for (int i = n; i > 0; i--) {
        if (i >= h) {
            ans += n;
        } else {
            int time = k;
            int max_j = (h - i + time - 2) / (time - 1);
            ans += max(0, i - max_j);
        }
    }

    cout << ans << endl;
    return;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
