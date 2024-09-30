#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;
    
    int ans = 0;
    
    // Iterate over all pairs (i, j)
    int diff = 0;
    
    for(int i=l;i<=r;i++){
        if(i&1){
            diff++;
        }
    }
    
    cout << diff/2 << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
