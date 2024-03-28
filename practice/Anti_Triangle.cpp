#include <bits/stdc++.h>
using namespace std;

vector<int> antiTri(int n, int L)
{
    vector<int> ans;
    int current = 0;

    // the smaller nuumbers
    int i = 0;
    if (L > 2000 )
    {
        for (i = 1; i <= n; i++)
        {
            if( i>L) break;
            ans.push_back(i);
        }
    }
    else{
        current=1;
        for (i = i + 1; i<=n; i++)
        {
            current = current + L; 
            ans.push_back(current);
        }
    }
    return ans;
}
void solve()
{
    int n, l;
    cin >> n >> l;
    vector<int> sides = antiTri(n, l);

    for (int i = 0; i < sides.size(); i++)
    {
        cout << sides[i] << " ";
    }
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}