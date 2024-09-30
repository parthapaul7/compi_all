#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
		cin >> n;

		string str;
		cin >> str;

		if (n == 1)
		{
			cout << "BOB" << endl;
            return;
		};

		int cnt0 = 0;
		int cnt1 = 0;
		for (int i = 0; i < n; i++)
		{
			if (str[i] == '0')
				cnt0++;
			else
				cnt1++;
		};
		int diff = abs(cnt1 - cnt0);
		if (n & 1)
		{
			if (diff >= 2)
				cout << "BOB" << endl;
			else
				cout << "ALICE" << endl;
		}
		else
		{
			if (diff >= 2)
				cout << "ALICE" << endl;
			else
				cout << "BOB" << endl;
		};
}
int main(){
int T;
cin>>T;
while(T--){
solve();
}
}