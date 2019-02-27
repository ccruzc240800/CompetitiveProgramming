#include<bits/stdc++.h>
using namespace std;
set <char> abc, s;
int main(){
	int n;
	cin>>n;
	if(n < 26)	{
		cout<<"NO"<<endl;
		return 0;
	}
	for(int i = 0; i < 26; i++)	abc.insert('a' + i);
	for(int i = 0; i < n; i++) {
		char c;
		cin>>c;
		c = tolower(c);
		s.insert(c);
	}
	(s == abc) ?	cout<<"YES" : cout<<"NO";
	cout<<endl;
	return 0;
}
