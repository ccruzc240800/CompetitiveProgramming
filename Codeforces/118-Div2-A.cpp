#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i = 0; i < s.size(); i++) {
		s[i] = tolower(s[i]);
		if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y') continue;
		cout<<"."<<s[i];
	}
	cout<<endl;
	return 0;
}
