#include <bits/stdc++.h>
using namespace std;

long answer(int n, int k){
    long ans = 0;
    for (int i = k+1; i < n; i++){
        int a = n / i;
        ans += (a - 1) * (i - k);
        if(n%i>=k){
            ans += (n % i - k + 1);
        }
        
    }
    int m = n - k;
    long term = m * (m + 1) / 2;
    ans+=term;
    return ans;
}
int main(){
    int n, k;
    cin >> n >> k;
    // if(k==0){
    //     cout << n * n << endl;
    //     return 0;
    // }
    cout << answer(n, k) << endl;
}