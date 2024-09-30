#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,s;
    cin>>n>>s;

    if(s%2 != 0 || n == 1){
        cout<<-1<<endl;
        return;
    }

    // if n is odd equally divide the array then one part is more 
    if(n%2 != 0){
        if(s<n){
            cout<<-1<<endl;
            return;
        }
        n-=2;

        cout<<s/2-n/2<<" "<<s/2-n/2-1<<" ";

        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }else{
        if(s<n){
            cout<<-1<<endl;
            return;
        }
        n-=2;
        cout<<s/2-n/2<<" "<<s/2-n/2<<" ";

        while(n--){
            cout<<1<<" ";
        }
        cout<<endl; 
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