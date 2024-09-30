#include <bits/stdc++.h>
using namespace std;

void solve(){
    int l,r;
    cin>>l>>r;
    
    // speareat more than 3 and less than 3 numbers
    // case 1
    int ans=0;
    bool flag = false;
    if(l==1){
        ans+=1;
        l++;
    }
    if(l==2){
        ans+=1;
        // l++;
    }

    int i=0;
    while(r/int(pow(3,i)) >= 3){
        i++;
    }

    while(i>0){
        int rem = r- (int)pow(3,i)+1;

        if(r-rem<l){
            ans+= (r-l+1)*(i+1);
            break;
        }else{
            r=r-rem;
            ans+= (rem)*(i+1);
        }
        i--;
    }

    // int rem = r-l+1;

    // ans+= (rem)*(i+1);
    // if(flag){
    //     cout<<ans<<endl;
    //     return;
    // }
    cout<<ans+i+1<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}