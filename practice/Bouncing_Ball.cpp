#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> prefixSum(n, 0);
    prefixSum[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + a[i];
    }

    int totalSum = prefixSum[n - 1];
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            int leftSum = (i == 0) ? 0 : prefixSum[i - 1];
            int rightSum = totalSum - prefixSum[i];

            if (abs(leftSum - rightSum) == 0) {
                ans += 2;
            } else if (abs(leftSum - rightSum) == 1) {
                ans += 1;
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
}
