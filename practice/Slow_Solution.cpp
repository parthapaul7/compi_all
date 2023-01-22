#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int noOfDivs=0;
        int lastNum=0;

        for( int i=0;i<a;i++){
            if(b*(i+1)<=c && i<a){
                noOfDivs++;
            }
            else{
                lastNum = c - b*i;
                break;
            }
        }

        cout<<noOfDivs*b*b+lastNum*lastNum<<endl;
    }
    
 
}