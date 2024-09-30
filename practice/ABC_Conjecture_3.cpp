#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    if(n<3){
        cout<<0<<endl;
        return;
    }
    // find number of abc subsequence
    for(int i=0;i<n;i++){
        if(s[i] != 'a') continue;
        else{
            s = s.substr(i,n-i);
            break;
        }
    }
    for(int i=s.size();i>=0;i--){
        if(s[i] != 'c') continue;
        else{
            s = s.substr(0,i+1);
            break;
        }
    }

    n = s.size();
    int ab = 0, bc = 0, abc = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            ab++;
        }else if(s[i]=='b'){
            bc+=ab;
        }else{
            abc+=bc;
        }
    }
    // cout<<abc<<endl;

    int a=0;
    int c=0;

    // as before b 
    bool before_b=false;
    for(int i=n-1;i>=0;i--){
        if(s[i] == 'b') before_b=true;
        if(s[i]=='a' && before_b){
            a++;
        }
    }
    before_b=false;
    for(int i=0;i<n;i++){
        if(s[i]=='b') before_b=true;

        if(s[i]=='c' && before_b){
            c++;
        }
    }
    // cout<<s<<endl;
    cout<<min(a,min(c,abc))<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}