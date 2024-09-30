#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>=maxi){
            maxi = a[i];
        }
    }

    bool atEven = false;
    for(int i=0;i<n;i++){
        if(a[i] == maxi && i%2 == 0){
            atEven= true;
            break;
        }
    }

    // if m- e arr e
    if(n%2 == 0){
        cout<<n/2+maxi<<endl;
    }else{
        if(!atEven){
            cout<<n/2+maxi<<endl;
        }else{
            cout<<n/2+maxi+1<<endl;
        }
    }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}