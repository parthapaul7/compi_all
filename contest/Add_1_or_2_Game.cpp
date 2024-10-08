#include <bits/stdc++.h>
using namespace std;
int solve(int n,int cnt){
    if(n==0){
        return cnt;
    }
    if(n<0){
        return 0;
    }

    return solve(n-1,cnt+1) + solve(n-2,cnt+1);
}

void solve(){
    int n;
    cin>>n;
    if(n==1){
        cout<<"ALICE"<<endl;
    }else{
        cout<<"BOB"<<endl;
    }

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}