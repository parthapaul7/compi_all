#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    if(a==b){
        cout<<"Yes"<<endl;
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=j;k<n;k++){
                bool cond = a[i]=='a' && a[j]=='b' && a[k]=='c';
                if(cond){
                    char temp = a[i];
                    a[i] = a[k];
                    a[k] = temp;
                    if(a==b){
                        cout<<"Yes"<<endl;
                        return;
                    }
                }


            }
        }
    }
    cout<<"No"<<endl;
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