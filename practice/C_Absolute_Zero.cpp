#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Check if all are odd or all are even
    bool isOdd = A[0] & 1;
    int maxDiff = 0, minDiff = INT_MAX;

    for(int i = 1; i < n; i++) {
        maxDiff = max(maxDiff, abs(A[i] - A[i - 1]));
        minDiff = min(minDiff, abs(A[i] - A[i - 1]));

        if (!isOdd && (A[i] & 1)) {
            cout << -1 << endl;
            return;
        } else if (isOdd && !(A[i] & 1)) {
            cout << -1 << endl;
            return;
        }
    }

    if (A[0] == 0 && maxDiff == 0) {
        cout << 0 << endl;
        return;
    }

    if (maxDiff == 0) {
        cout << 1 << endl;
        cout << A[0] << endl;
        return;
    }

    int maxVal = *max_element(A.begin(), A.end());

    // int steps = (int)log2(maxVal / (minDiff / 2)) + 1;
    // cout << steps << endl;

    // Output each division step
    vector<int> ans;
    while (maxVal != minDiff / 2 && maxVal != 0) {
        maxVal = maxVal>>1;
        ans.push_back(maxVal);
        // cout << maxVal << " ";
    }
    ans.push_back(maxVal);
    cout << ans.size() << endl;

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
