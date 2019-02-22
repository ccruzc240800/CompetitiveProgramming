#include<bits/stdc++.h>
using namespace std;
string s1, s2;
int p1, p2;
int main() {
	int n;
	cin>>n;
	cin>>s1;
	p1++;
	for (int i = 1; i < n; i++) {
		string s;
		cin>>s;
		if (s2.empty() && s != s1)	s2 = s;
		(s == s1) ? p1++ : p2++;
	}
	if (p1 > p2)	cout<<s1<<endl;
	else	cout<<s2<<endl;
	return 0;
}
