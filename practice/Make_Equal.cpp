#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    if(n==1){
        cout<<"YES"<<endl;
        return;
    }

    // first and last element has to be lowest and hence same

    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min = a[i];
        }
    }

    if(a[0]!=min || a[n-1]!=min){
        cout<<"NO"<<endl;
        return;
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