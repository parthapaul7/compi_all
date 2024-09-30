#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n; 

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }


    // find the first and last positive number index in a
    int firstPos = -1;
    int lastPos = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0){
            firstPos = i;
            break;
        }
    }
    for(int i = n-1; i >= 0; i--) {
        if(a[i] > 0){
            lastPos = i;
            break;
        }
    }

    if(firstPos == lastPos) {
        cout<<0<<endl;
        return;
    }
    // find the negetive number between this two index
    int count = 0;
    for(int i = firstPos; i <= lastPos; i++) {
        if(a[i] < 0){
            count++;
        }
    }

    cout<<count<<endl;

}

int main() {
    int T;
    cin >> T;
    while(T--) {
        solve();
    }
}
