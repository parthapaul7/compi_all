#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long countGoodSubsequences(vector<int>& A) {
    sort(A.begin(), A.end());
    int N = A.size();
    long long totalCount = 0;
    
    for (int M = 1; M <= N; ++M) {
        int start = 0;
        for (int end = 0; end < N; ++end) {
            while (A[end] - A[start] > M - 1) {
                start++;
            }
            if (end - start + 1 == M && A[end] - A[start] == M - 1) {
                totalCount++;
            }
        }
    }
    
    return totalCount;
}

int main() {
    int T;
    cin>>T;
    while(T--){
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long result = countGoodSubsequences(A);
    cout << result << endl;
    }
}
