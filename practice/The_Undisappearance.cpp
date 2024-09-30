#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++) {
        unordered_map<int, int> inside;
        unordered_map<int, int> outside;

        // Initialize the outside map for the current i
        for (int k = 0; k < i; k++) {
            outside[a[k]]++;
        }

        for (int j = i; j < n; j++) {
            inside[a[j]]++;

            if (j + 1 < n) outside[a[j + 1]]--;

            // Checking the conditions
            bool condition1 = inside[1] > 0 && outside[2] == 0;
            bool condition2 = inside[2] > 0 && outside[3] == 0;
            bool condition3 = inside[3] > 0 && outside[1] == 0;

            if (condition1 || condition2 || condition3) {
                ans++;
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
