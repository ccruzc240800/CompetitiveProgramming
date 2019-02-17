#include<bits/stdc++.h>
using namespace std;
string s;
char arr[] = {"hello"};
bool let[5];
int main(){
	cin>>s;
	int j = 0;
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == arr[j]) {
			let[j] = true;
			j++;
		}
		if(j == 5) break;
	}
	for(int i = 0; i < 5; i++) {
		if(!let[i]) {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
