#include<bits/stdc++.h>
using namespace std;
string s, s1;
int main() {
	cin>>s;
	for(int i = 0; i < 5; i++) {
		cin>>s1;
		if(s[0] == s1[0] || s[1] == s1[1]) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
