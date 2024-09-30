#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    // find the first 1 after from right
    // int count = 0;
    // while(!n){
	//     count++;
	//     n = n & (n-1); // in each operation right most set bit is set to zero
	// }
    bool flag = false;
    bool problem = false;
    int ans =0;
    for(int i=0;i<31;i++){
        int a = n  >> i;
        if( a & 1) {
            // ans = ans | (1<<i);
            flag = true;
            
        }else if(flag){
            problem = true;
        }
        
    }

    if(!problem){
        cout<<0<<endl;
        return;
    }
    int prev = 0;
    for(int i=0;i<31;i++){
        int a = n  >> i;
        if(prev == 0){}
        if( a & 1) {
            // ans = ans | (1<<i);
            prev = 1;
        }else{
            prev = 0;
        }
    }
    while(i<2*n){
        int temp = i&n;

        // if temp is 2^n 

        while(temp%2 == 0 && temp>0){
            temp>>=1;
        }
        // cout<<temp<<endl;
        int cond = temp&(temp+1);

        if(!cond){
            cout<<i-n<<endl;
            break;
        }

        i++;
    }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}