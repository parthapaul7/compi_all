#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k;
    cin>>n>>k;
    vector<int> arr;
    for(int i=0;i<2*n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }

    sort(arr.begin(),arr.end());

   // print all even indexes number till 2k
    for(int i=0;i<2*k;i++)
    {
        cout<<arr[2*i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<2*k;i++)
    {
        cout<<arr[2*i +1]<<" ";
    }
    cout<<endl;

    return; 
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