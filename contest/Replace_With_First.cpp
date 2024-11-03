#include <bits/stdc++.h>
using namespace std;
void solve(){
    int m,n;
    cin>>m>>n;
    string s,t;
    cin>>s>>t;
    
    if(m<n){
        swap(m,n);
        swap(s,t);
    }
    int l=0,r=0;

    if(s[0] != t[0]){
        cout<<-1<<endl;
        return;
    }

    if(s == t){
        cout<<0<<endl;
        return;
    }

    int cnt=0;
    while(l<m && r<n){
        if(s[l]==t[r]){
            l++;
            r++;
            continue;
        }else{
            // does the end has the same chars
            for(int i=n-1,j=m-1;i>=r;i--,j--){
                if(t[i] != s[j]){
                    cout<<2<<endl;
                    return;
                }
            }
            cout<<1<<endl;
            return;
        }
    }

    if(l==m && r==n){
        cout<<0<<endl;
        return;
    }else{
        cout<<1<<endl;
        return;
    }
    

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}