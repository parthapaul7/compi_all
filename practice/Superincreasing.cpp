#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k,x;
    cin>>n>>k>>x;

    int sum =1;
    sum = pow(2,k-1); 
    if(sum <= x){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}