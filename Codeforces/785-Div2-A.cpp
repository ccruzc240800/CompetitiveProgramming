#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int contC = 0;
int main(){
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>s;
		if(s[0] == 'T')	contC += 4;
		if(s[0] == 'C')	contC += 6;
		if(s[0] == 'O')	contC += 8;
		if(s[0] == 'D')	contC += 12;
		if(s[0] == 'I')	contC += 20;
	}
	cout<<contC<<endl;
	return 0;
}
