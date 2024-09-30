#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    int count2 = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2){
            count2++;
        }
    }

    if(count2%8 == 0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}