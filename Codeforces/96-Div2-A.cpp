#include<bits/stdc++.h>
using namespace std;
string s;
int player0;
int player1;
int main() {
	cin>>s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0') {
			player0++;
			player1 = 0;
		}
		if(s[i] == '1') {
			player1++;
			player0 = 0;
		}
		if(player0 == 7 || player1 == 7) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
