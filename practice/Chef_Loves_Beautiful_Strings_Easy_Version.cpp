#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    long long same = 0;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1]){
            same++;
        }
    }

    long long ans=0; 
    for(int i=n-1;i>1;i--){
        if(i>n-same-1){
            ans+=(n-same-1);
        }else{
            ans+=i-1;
        }
    }

    cout<<ans<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}