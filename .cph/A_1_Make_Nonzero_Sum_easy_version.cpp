// find non zero sum problem solution

#include <iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    for(int t=0;t<T;t++){
        int n;
        cin>>n;
        int arr[n];
        // take input of the array
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int sum =0;

        for(int i=0;i<n;i++){
            sum = sum + arr[i];
        }
        
        if(sum==0){
            cout<<t<<endl;
            cout<<1<<" "<<n<<endl;
        }
 
    }
}