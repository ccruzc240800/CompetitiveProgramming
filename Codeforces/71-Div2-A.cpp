#include<bits/stdc++.h>
using namespace std;
string s;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>s;
		if (s.size() <= 10) cout<<s<<endl;
		else {
			cout<<s[0];
			cout<<s.size() - 2;
			cout<<s[s.size()-1]<<endl;
		}
	}
	return 0;
}
