#include<bits/stdc++.h>
using namespace std;

int nextPowerOf2(int n) {
    int power = 1;
    int ans =0;
    while (power < n) {
        power <<= 1; // Shift left by 1, equivalent to multiplying by 2
        ans++;
    } 

    return ans; 

}

void solve() {
    int N;
    cin >> N;
    vector<int> ans;

    int c = nextPowerOf2(N);

    if ( (N & (N-1)) == 0){
        c = c+1;
    }
    cout<<c<<endl;

    for (int i = c; i > 0; --i) {
        int count = 1 << (c - i); // 2^(n-i)
        for (int j = 0; j < count; ++j) {
            ans.push_back(i);
        }
    } 

    for(int i=0;i<N;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
