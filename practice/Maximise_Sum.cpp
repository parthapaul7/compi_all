#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // count -ve numbers
    int count = 0;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            count++;
        }
    }
    long long sum = 0;
    bool foundZero = false;

        // sum is the answer 
    for(int i=0;i<n;i++){
        sum+=abs(a[i]);
        if(a[i]==0){
            foundZero = true;
        }
    }

    // fint the maximum -ve number in the array

    int maxNeg = INT_MIN;
    int minPos = INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            maxNeg = max(maxNeg,a[i]);
        }
        if(a[i]>=0){
            minPos = min(minPos,a[i]);
        }
    }

    
    if(count%2==0 || foundZero){
        cout<<sum<<endl;
        return;
    }else{
        if(abs(maxNeg)>minPos){
            cout<<(sum-2*minPos)<<endl;
            return;
        }
        cout<<(sum+2*maxNeg)<<endl;
    }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}