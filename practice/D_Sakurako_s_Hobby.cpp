#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
    }
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        a[i].second = s[i] - '0';
    }

    vector<int> ans(n, 0);
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;

        int cur = i;
        vector<int> cycle;
        int black_count = 0;

        // Traverse the cycle starting from index i
        while (!visited[cur]) {
            visited[cur] = true;
            cycle.push_back(cur);

            // Count black integers in this cycle
            if (a[cur].second == 0) {
                black_count++;
            }

            cur = a[cur].first - 1;  // Move to the next index in the permutation
        }

        // Assign the black_count to all elements in the cycle
        for (int idx : cycle) {
            ans[idx] = black_count;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
