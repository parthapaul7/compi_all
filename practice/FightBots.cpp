#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,x,y;
    cin>>n>>x>>y;
    string moves; 
    cin>>moves;
    
    for(int i=0;i<n;i++){
        pair<int,int> currPos = {0,0};
        if(moves[i]=='U'){
            currPos.second++;
        }
        else if(moves[i]=='D'){
            currPos.second--;
        }
        else if(moves[i]=='L'){
            currPos.first--;
        }
        else if(moves[i]=='R'){
            currPos.first++;
        }

        // distance from current position to destination
        int dist = abs(currPos.first-x) + abs(currPos.second-y);
        // cout<<dist<<endl;
        if(dist == i+1){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}

