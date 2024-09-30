#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string ans="";
    // two cases are possible 
    
    while(ans.size()<n){
        cout<<"? "<<ans<<"0"<<endl;
        cout.flush();

        int res;
        cin>>res;
        if(res == 0){
            cout<<"? "<<ans<<"1"<<endl;
            cout.flush();
            cin>>res;
            if(res == 1){
                ans.push_back('1');
            }else{
                break;
            }
        }else{
            ans.push_back('0');
        }
    }

    while(ans.size()<n){
        cout<<"? "<<"1"<<ans<<endl;
        cout.flush();
        int res;
        cin>>res;
        if(res == 0){
            cout<<"? "<<"0"<<ans<<endl;
            cout.flush();
            cin>>res;
            if(res == 1){
                ans = '0'+ans;
            }else{
                break;
            }
        }else{
            ans = '1'+ans;
        }
    }

    cout<<"! "<<ans<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}