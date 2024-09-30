#include <bits/stdc++.h>
using namespace std;
void solve(){
    int m,n;
    cin>>n>>m;
    // set<int> pq;
    int maxNum =INT_MIN;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        maxNum = max(maxNum,temp);
        
    }

    for(int i=0;i<m;i++){
        char op;
        cin>>op;
        int mini,maxi;
        cin>>mini>>maxi;

        // int topElem = pq.top();
        if(op == '+' && maxNum <= maxi && mini <= maxNum){
            // pq.pop();
            // pq.push(topElem+1);
            maxNum++;
        }else if(op=='-' && maxNum <= maxi && mini <= maxNum){
            // pq.pop();
            // pq.push(topElem-1);
            maxNum--;
        }
        cout<<maxNum<<" ";
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