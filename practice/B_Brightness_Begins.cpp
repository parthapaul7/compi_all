#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long k;
    cin>>k;

    long long n = k;

    long long l = 0,r=INT_MAX;
    while(l<r){
        long long mid = 1+l + (r-l)/2;
        if(mid*mid > n){ 
            r = mid-1;
        }else{
            l = mid;
            if(n < k+mid){
                r += r+mid;
                n = k+mid;
            }
            // n = max(k+mid,n);
        }
    }
    
    cout<<n<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}