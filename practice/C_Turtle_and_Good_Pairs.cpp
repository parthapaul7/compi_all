 #include <bits/stdc++.h>
 using namespace std;

 bool sortFunc(pair<char,int> a, pair<char,int>b){
    return a.second > b.second;
 }

 void solveQueue(){
    int n;
    cin>>n;
 }
 void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    unordered_map<char,int> mp;
    vector<pair<char,int>> v;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }

    for(auto it:mp){
        v.push_back({it});
    }

    sort(v.begin(),v.end(),sortFunc);

    int l=0,r=1;
    string ans="";
    
    while(l<v.size() || r<v.size()){

        while(l<v.size() && v[l].second == 0){
            l++;
        }
        if(l==r) l++;
        while(r<v.size() && v[r].second == 0){
            r++;
        }
        if(l==r) r++;

        if(l<v.size()){
            ans.push_back(v[l].first);
            v[l].second--;
        }

        if(r<v.size()){
            ans.push_back(v[r].first);
            v[r].second--;  
        }
        
        sort(v.begin(),v.end(),sortFunc);

    }

    
    cout<<ans<<endl;
 }
 int main(){
 int T;
 cin>>T;
 while(T--){
 solve();
 }
 }
 