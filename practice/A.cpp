#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n=10;
    vector<int> v(n);

    int p1=0,p2=1;

    int s=0,e=n;

    while(e<n){
        int seg = s + (s-e)/2;

        // check if possible 
        while(p1<n){
            while(p2 < min(p2+seg,n)){
                if(v[p2]<v[p1]){
                    break;
                }
                p2++;
            }
        }
        p1++;
        p2+=seg;

        
    }
    

}
int main(){
int T;
solve();
}
