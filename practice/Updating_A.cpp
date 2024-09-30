#include <bits/stdc++.h>
using namespace std;

long long maxSum(int arr[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MAX;
    if(n%2 == 0){
        arr[n] = 0;
        n=n+1;
    }

    for(int i=2;i<n;i+=2){
        currentSum = min(min(arr[i]+arr[i-1],arr[i-1]+arr[i-2]),min(currentSum+arr[i]+arr[i-1],arr[i]+arr[i-1]+arr[i-2]));
        maxSum = min(maxSum,currentSum);
    } 
    return maxSum;
}

void solve(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<a[0]<<endl;
        return;
    }
    if(n==2){
        cout<<abs(a[0]+a[1])<<endl;
        return;
    }
    long long sum=maxSum(a,n);

    // cout<<sum<<endl;

    // find the sum of array 
    long long sum1 = 0;
    for(int i=0;i<n;i++){
        sum1+=a[i];
    }

    cout<<abs(sum1-sum+abs(sum))<<endl;
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}