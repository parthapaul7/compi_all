#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // check if all elements are same 
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]!=k){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<0<<endl;
        return;
    }

    // check all the elements not k are together 
    int start = -1, end = -1;
    for(int i=0;i<n;i++){
        if(a[i]!=k && start == -1){
            start = i;
        }
        if(a[i]!=k){
            end = i;
        }

    }


    if(start == end){
        cout<<1<<endl;
        return;
    }

    int allGcd = 1;
    int allXor = 1;
    for(int i=start;i<=end;i++){
        if(a[i]%k != 0){
            allGcd = 0;
        }
    }

    for(int i=start+1;i<=end;i++){
        if(a[i] != a[i-1]){
            allXor = 0;
        }
    }

    if(allGcd || allXor){
        cout<<1<<endl;
        return;
    }else{
        cout<<2<<endl;
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

