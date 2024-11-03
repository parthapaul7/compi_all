#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long b,c,d;
    cin>>b>>c>>d;
    long long ans = 0;
    for(int i=0;i<61;i++){
        int bit_b = (b>>i)&1;
        int bit_c = (c>>i)&1;
        int bit_d = (d>>i)&1;

        if(bit_d == 0){
            if(bit_c == 0 && bit_b == 1){
                cout<<-1<<endl;
                return;
            }
            if(bit_b == 1){
                ans |= (1LL<<i);
            }
        }
        else{
            if(bit_b ==0  && bit_c == 1){
                cout<<-1<<endl;
                return;
            }
            if(bit_c ==0){
                ans |= (1LL<<i);
            }

        }
    }

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