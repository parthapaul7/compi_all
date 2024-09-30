#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin>>n>>s;

    int i=0,j=3;

    while(j<n){
        bool cond = s[i] == '1' && s[i+1] == '1' && s[j] == '0' && s[j-1] == '0';
        if(cond){
            char temp = s[i];
            s[i]=s[j];
            s[j]= temp;
            temp=s[i+1];
            s[i+1] = s[j+1];
            s[j+1] = temp;
        }
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}