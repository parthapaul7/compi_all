#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int diff = a-b;
        int req = 10 - diff;
        if(req <=0) {
            cout<<0<<endl;
            continue;
        } 
        int ans = 0;

        if(req%3 == 0) ans = req/3;
        else 
        ans = req/3 +1;
        
        cout<<ans<<endl;
    }
}