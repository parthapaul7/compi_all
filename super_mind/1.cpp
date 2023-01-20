#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

int solve(int n) {
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (gcd(i, j) == 1) {
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n = 5;
    int result = solve(n);
    printf("The number of coprime pairs between 1 and %d is %d\n", n, result);
    return 0;
}