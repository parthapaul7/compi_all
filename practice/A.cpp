#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

tuple<ll, ll, ll> countChars(const vector<string>& s, int p) {
    ll z = 0, o = 0, q = 0;
    for (const auto& x : s) {
        if (x[p] == '0') z++;
        else if (x[p] == '1') o++;
        else q++;
    }
    return make_tuple(z, o, q);
}

void balance(ll& z, ll& o, ll& q) {
    if (z > o) {
        ll d = z - o;
        o += min(d, q);
        q -= min(d, q);
    } else {
        ll d = o - z;
        z += min(d, q);
        q -= min(d, q);
    }
}

void distribute(ll& z, ll& o, ll& q) {
    z += q / 2;
    o += q / 2;
    if (q & 1) {
        if (o > z) z++;
        else o++;
    }
}

ll hammingSum(int n, int m, const vector<string>& s) {
    ll h = 0;
    for (int i = 0; i < n; ++i) {
        ll z, o, q;
        tie(z, o, q) = countChars(s, i);
        balance(z, o, q);
        distribute(z, o, q);
        h += z * o;
    }
    return h;
}

void testCases() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> s(m);
        for (int i = 0; i < m; ++i) {
            cin >> s[i];
        }
        cout << hammingSum(n, m, s) << endl;
    }
}

int main() {
    testCases();
    return 0;
}
