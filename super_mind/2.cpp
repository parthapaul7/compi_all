#include <bits/stdc++.h>
using namespace std;

void answer(vector<int> &inp, int n){
    vector<int> left(n, 0), right(n, 0);
    int sum = 0;
    for (int i = 1; i < n; i++){
        sum += inp[i - 1];
        left[i] = sum;
    }
    sum = 0;
    for (int i = n - 2; i >= 0; i--){
        sum += inp[i + 1];
        right[i] = sum;
    }
    for (int i = 0; i < n; i++){
        if(left[i]==right[i]){
            cout << i + 1 << " " << left[i] << endl;
            return;
        }
    }
    cout << -1 << " " << -1 << endl;
    return;
}
int main(){
    int n;
    cin >> n;
    vector<int> inp(n, 0);
    for (int i = 0; i < n; i++){
        cin >> inp[i];
    }
    answer(inp, n);
    return 0;
}