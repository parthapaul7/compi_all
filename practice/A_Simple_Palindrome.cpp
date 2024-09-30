#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<char> v={'a','e','i','o','u'};
 
    string s="";
 
    int num = n/5;
    int rep = n%5;
 
    // cout<<v[0]<<endl;
    // return;
 
    if(num==0){
        for(int i=0;i<rep;i++){
            s+=v[i];
        }
 
        cout<<s<<endl;
        return;
    }
 
    for(int i = 0; i < 5; i++) {
        
        bool isRem = false;
        for(int j = 0; j < num; j++) {
            s += v[i];
            if(rep>0 && !isRem) {
                isRem = true;
                s += v[i];
                rep--;
            }
        }
        // for(int i = 0; i < 5; i++) {
        //     if(rep > 0) {
        //         s += v[i];
        //         rep--;
        //     }
        // }
        
    }
 
    cout<<s<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}