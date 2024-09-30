#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long M,N,i,j,l;
    cin>>M>>N;
    cin>>i>>j>>l;

    long long hori = (i-1)/l + (M-i)/l + 1;
    long long vert = (j-1)/l + (N-j)/l + 1;


    cout<<hori*vert<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}