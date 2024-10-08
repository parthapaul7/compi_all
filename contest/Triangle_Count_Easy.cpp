#include <bits/stdc++.h>
#include <set>
using namespace std;
int solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    set<int> st;
    for(int i=0;i<n;i++){
        cin>>a[i];
        st.insert(a[i]);
        
    }
    
    
    int l =INT_MAX,r=0;
    for(int i=0;i<n;i++){
        st.erase(a[i]);
        // auto lower = s.lower_bound(a[i]);
        auto upper = st.upper_bound(a[i]);
      
        // cout<<*--upper<<endl;
        
        int val;
        if(upper != st.end()){
            auto above = upper;
            --upper;
            if(abs(*upper -a[i]) > abs(*above-a[i])){
                val = *upper;
            }else{
                val = *above;
            }
        }else{
            val = *--upper;
        }
        // cout<<val<<endl;
        l = min(abs(val-a[i]),l);
        r = max(abs(val+a[i]),r);

        st.insert(a[i]);
    }
    
    cout<<r<<" " <<l<<endl;
    // cout<<r-l-1<<endl;
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--){
        solve();
    }
}
