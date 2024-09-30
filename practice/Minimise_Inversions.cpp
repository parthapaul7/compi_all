#include <bits/stdc++.h>
using namespace std;
int findi(int n,string a){
    int countZeros = 0;
    int inversions2 = 0;
    for(int i=n-1;i>=0;i--){
        if(a[i]=='0'){
            countZeros++;
        }
        if(a[i]=='1'){
            inversions2 += countZeros;
        }
    }

    return inversions2;
}
void solve(){
    int n,k;
    cin>>n>>k;
    string a;
    cin>>a; 
    int ans = INT_MAX;
    // case 1
    for(int j=0;j<=k;j++){
        int rep1 = j;
        int rep0 = k-j;
        string b = a;
        // replacing 1s
        for(int i=0;i<n;i++){
            if(rep1>0 && b[i]=='1'){
                b[i] = '0';
                rep1--;
            }
        }
        // replacing 0s
        for(int i = n-1 ;i>=0;i--){
            if(rep0>0 && b[i]=='0'){
                b[i] = '1';
                rep0--;
            }

        }
        ans = min(ans,findi(n,b));
    }

    // case 2 
    
    cout<<ans<<endl;    
    return;
}

int main(){
int T;
cin>>T;
while(T--){
solve();
}
}