#include<bits/stdc++.h>
using namespace std;
string s;
int cont;
int main() {
	cin>>s;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '0' + 4 || s[i] == '0' + 7)	cont++;
	}
	(cont == 4 || cont == 7) ? cout<<"YES" : cout<<"NO";
	cout<<endl;
	return 0;
}
