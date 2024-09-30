#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n%2!=0){
        cout<<"-1\n";
        return;
    }

    vector<int> ans;

    char current='0';
    for(int i=0;i<n;i+=2){
        if(s[i]!=s[i+1]){
            if(s[i]==current){
                ans.push_back(i);
            }
            else{
                ans.push_back(i+1);
            }

            if(current=='0'){
                current='1';
            }
            else{
                current='0';
            }
        }
    }
    cout<<ans.size()<<"\n";
    for(auto x:ans){
        cout<<x+1<<" ";
    }
    cout<<"\n";

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}