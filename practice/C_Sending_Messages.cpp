#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, f , a , b;
    cin >> n >> f >> a >> b;
    int arr[20000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // if last elem of arr*a is more than f then we can send all the messages
    if ((long long)a*arr[n-1] < f)
    {
        // cout<<a*arr[n-1]<<endl;
        cout <<"YES"<< endl;
        return;
    }
 
    long long energy_saved = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<(long long)(arr[i] - arr[i-1])*a<<endl;
        if (i == 0 && (long long)arr[i]*a > b)
        {
            energy_saved += (long long)arr[i]*a-b;
        }
        else if((long long)(arr[i] - arr[i-1])*a > b)
        {
            energy_saved += (long long)(arr[i] - arr[i-1])*a - b;
 
        }
    }

    // cout<<"energy saved - "<<energy_saved<<endl;
 
    if (((long long)arr[n-1]*a - energy_saved) < f)
    {
        // cout<<"energy  "<<arr[n-1]*a << energy_saved<<endl;
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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