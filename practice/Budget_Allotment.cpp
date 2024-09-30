#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    long long excess = 0;
    int ans = 0;
    // First count the sectors that already have at least X and calculate the excess
    for (int i = 0; i < n; i++) {
        if (a[i] >= x) {
            excess += a[i] - x;
            ans++;
        }
    }

    // Try to allocate the excess to sectors that have less than X
    for (int i = n; i >= 0; i--) {
        if (a[i] < x) {
            int needed = x - a[i];
            if (excess >= needed) {
                excess -= needed;
                ans++;
            } else {
                break;
            }
        }
    }

    cout << ans << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}