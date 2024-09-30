#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    string s;
    cin>>n>>s;

    // count number of zeros and ones together
    int count = 0;
    for(int i=1;i<n;i++){
        if(s[i-1] == '0' && s[i] == '0'){
            count++;
        }
        else if(s[i-1] == '1' && s[i] == '1'){
            count++;
        }
    }   

    cout<<count<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}