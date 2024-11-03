#include<bits/stdc++.h>
#include <vector>

using namespace std;

// Function to construct the matrix
void constructMatrix(int N, int M) {
    
    // Output the matrix
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if(i==j){
                cout<<3<<" ";
            }else{
                if(j>=N){
                    if(j%N == i) cout<<3<<" ";
                    else cout<<2<<" ";
                }else if(i>=M){
                    if(i%M == j) cout<<3<<" ";
                    else cout<<2<<" ";
                }else{
                    cout<<2<<" ";
                }
            }


        }
        cout << endl;
    }
}

int main() {

    int T;
    cin>>T;
    int N, M;
    
    while(T--){
        cin >> N;
        cin >> M;

        constructMatrix(N, M);
    }   
    return 0;
}