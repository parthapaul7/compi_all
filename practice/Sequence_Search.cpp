#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a,b, k;
    cin>>a>>b>>k;
    int x1 =0;
    // handle k<=3 separately 
    if(k==1){
        cout<<0<<endl;
        return;
    }

    int l=0,r=1e9;
    k--;
    while(l<=r){
        int mid = l + (r-l)/2;

        int b1 = (mid>=b)? mid/b:0;

        int a1 = (mid-a)/b +1;
        if(mid - a < 0){
            a1 = 0;
        }

        if(a1+b1>k){
            r = mid-1;
        }else if(a1+b1<k){
            l = mid+1;
        }else{
            cout<<mid<<endl;
            return;
        }
    }

    // cout<<l<<endl;
    

    // cout<<a<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}