#include<bits/stdc++.h>
using namespace std;
string s1, s2, s3;
int main() {
	cin>>s1;
	cin>>s2;
	cin>>s3;
	s1 += s2;
	sort(s1.begin(), s1.end());
	sort(s3.begin(), s3.end());
	(s1 == s3) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
	return 0;
}
