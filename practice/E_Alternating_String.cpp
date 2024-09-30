#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans=0;
    if(n&1) ans++;

    unordered_map<char,int> evens,odds;
    
    for(int i=0;i<n;i++){
        if(i&1) odds[s[i]]++;
        else evens[s[i]]++;
    }

    // Convert to vector of pairs for sorting
    vector<pair<char, int>> evens_vec(evens.begin(), evens.end());
    vector<pair<char, int>> odds_vec(odds.begin(), odds.end());

    // Sort by value in descending order
    sort(evens_vec.begin(), evens_vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });

    sort(odds_vec.begin(), odds_vec.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
        return a.second > b.second;
    });
    
    // count the toal values in envn_vec and odd_vec except the first element
    int evens_sum=0,odds_sum=0;
    for(int i=1;i<evens_vec.size();i++){
        evens_sum+=evens_vec[i].second;
    }
    for(int i=1;i<odds_vec.size();i++){
        odds_sum+=odds_vec[i].second;
    }
    cout<<evens_sum+odds_sum<<endl;

}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}