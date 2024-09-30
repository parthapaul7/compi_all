#include <bits/stdc++.h>
using namespace std;
vector<int> find_subsequence_not_non_decreasing(const vector<int>& arr) {
    vector<int> subsequence;

    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            subsequence.push_back(arr[i]);
            i++;
        }
    }

    return subsequence;
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> subsequence = find_subsequence_not_non_decreasing(arr);

    for(auto i:subsequence){
        cout<<i<<" ";
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