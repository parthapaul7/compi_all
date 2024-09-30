#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    int l=0;int r=n-1;
    while(l<k){
        int first = A[l];
        int last = A[n-1];

        int num = first+last;

        A.pop_back();
        l++;
        A.push_back(num);
    }
    
    for(int i = l;i<n;i++){
        cout<<A[i]<<" ";
    }

    cout<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}