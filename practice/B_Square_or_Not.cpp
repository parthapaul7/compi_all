#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    // check if n is square number or not
    int x = sqrt(n);
    if(x*x != n){
        cout<<"NO"<<endl;
        return;
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            // the edges are one in string 
            if(i==0 || j==0 || i==x-1 || j==x-1){
                if(s[i*x+j] == '0'){
                    cout<<"NO"<<endl;
                    return;
                }
            }else{
                if(s[i*x+j] == '1'){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }
    }

    cout<<"YES"<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}