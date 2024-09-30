#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool canConvert(const string& S, const string& T, int K) {
    if (S.size() != T.size()) return false;

    int N = S.size();
    vector<int> countS(2, 0), countT(2, 0);
    
    for (int i = 0; i < N; ++i) {
        countS[S[i] - '0']++;
        countT[T[i] - '0']++;
    }

    if (countS != countT) return false;

    int diffCount = 0;
    for (int i = 0; i < N; ++i) {
        if (S[i] != T[i]) diffCount++;
    }

    int minSwapsNeeded = diffCount / 2;
    if (K < minSwapsNeeded) return false;
    if ((K> minSwapsNeeded) && (countS[0]>1 || countS[1]>1) ) return true;
    if ((K-minSwapsNeeded) %2 != 0)  return false;

    return true;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;
        string S, T;
        cin >> S >> T;
        
        if (canConvert(S, T, K)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
