#include<bits/stdc++.h>
using namespace std;
string s, t;
int main(){
	cin>>s;
	cin>>t;
	reverse(s.begin(), s.end());
	if(s == t)	cout<<"YES"<<endl;
	else	cout<<"NO"<<endl;
	return 0;
}
