#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int> A(n);
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    for(int i=0;i<q;i++){
        int a,b;
        cin>>a>>b;
        int len = b-a+1;
        if(len&1){
            cout<<"NO"<<endl;
            continue;
        }

        // count numbers of 1 2 and 3
        int cnt1=0,cnt2=0,cnt3=0;
        for(int j=a-1;j<b;j++){
            if(A[j]==1){
                cnt1++;
            }
            else if(A[j]==2){
                cnt2++;
            }
            else{
                cnt3++;
            }
        }
        // if count of any two is greater than the third one then its yes
        vector<int> cnt = {cnt1,cnt2,cnt3};
        // for(auto it:cnt){
        //     cout<<it<<" ";
        // }
        sort(cnt.begin(),cnt.end());

        if(cnt[2]==len/2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;  // Read the number of test cases

//     while (T--) {
//         int n, q;
//         cin >> n >> q;
//         vector<int> vec(n);

//         for (int i = 0; i < n; ++i) {
//             cin >> vec[i];  // Read the elements of the array
//         }

//         // Precompute cumulative sums for 1's, 2's, and 3's
//         vector<int> o(n), t(n), th(n);
//         for (int i = 0; i < n; ++i) {
//             o[i] = (vec[i] == 1) + (i - 1 >= 0 ? o[i - 1] : 0);  // Cumulative count of 1's
//             t[i] = (vec[i] == 2) + (i - 1 >= 0 ? t[i - 1] : 0);  // Cumulative count of 2's
//             th[i] = (vec[i] == 3) + (i - 1 >= 0 ? th[i - 1] : 0);  // Cumulative count of 3's
//         }

//         // Process queries
//         while (q--) {
//             int l, r;
//             cin >> l >> r;
//             l--; r--;  // Convert to 0-based index

//             int ones = o[r] - (l - 1 >= 0 ? o[l - 1] : 0);      // Count of 1's in the range [l, r]
//             int twos = t[r] - (l - 1 >= 0 ? t[l - 1] : 0);      // Count of 2's in the range [l, r]
//             int threes = th[r] - (l - 1 >= 0 ? th[l - 1] : 0);  // Count of 3's in the range [l, r]
//             int sz = (r - l + 1);  // Length of the segment

//             // If the length of the segment is odd, it cannot be an anti-palindrome
//             if (sz & 1) {
//                 cout << "NO" << endl;
//             } else {
//                 bool valid = false;
//                 int mini = sz / 2;

//                 // Check if any of the counts can form half of the anti-palindrome
//                 if (ones >= mini) valid = true;
//                 if (twos >= mini) valid = true;
//                 if (threes >= mini) valid = true;

//                 // Check if each count is less than or equal to half the segment size
//                 if (ones <= mini && twos <= mini && threes <= mini && valid) {
//                     cout << "YES" << endl;
//                 } else {
//                     cout << "NO" << endl;
//                 }
//             }
//         }
//     }

//     return 0;
// }
