#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // cout<<"nis" <<n<<endl;
    for(int i=0;i<n-1;i++){
        int maxm=0,minm =INT_MAX,maxI=0,minI=0;
        for(int j=0;j<n;j++){
            if(a[j] == -1) continue;

            if(i&1){
                maxm = max(maxm,a[j]);
                if(maxm == a[j])
                    maxI = j;
            }
            else{
                
                minm = min(minm,a[j]);
                if(minm==a[j])
                    minI =j;
            }
        }

        if(i&1){
            a[maxI] = -1;
        }else{
            a[minI] = -1;
        }
    }
    // cout<<"nis" <<n<<endl;

    // find the last number 
    int num;
    for(int i=0;i<n;i++){
        if(a[i] != -1)
            num =a[i];
    }

    cout<<num<<endl;
    return;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}