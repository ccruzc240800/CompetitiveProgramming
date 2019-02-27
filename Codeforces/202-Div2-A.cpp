#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
	cin>>s;
	char tmp = s[0];
	int cont = 1;
	for(int i = 1; i <s.size(); i++){
		if(tmp == s[i])	cont++;
		if(tmp < s[i]) {
			tmp = s[i];
			cont = 1;
		}
	}
	for(int i = 1; i <= cont; i++)	cout<<tmp;
	cout<<endl;
}
