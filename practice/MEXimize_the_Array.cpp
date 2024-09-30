#include <bits/stdc++.h>
using namespace std;
void solve(){
        int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    };
	    sort(a.begin(),a.end());
	    long long sum=0;
	    for(int i=0;i<n;i++){
	        sum+= abs(a[i]-i);
	    };
	    cout<<sum<<endl;

}

int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--){
        solve();
	}

}