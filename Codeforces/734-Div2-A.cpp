#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int contA = 0;
int contD = 0;
int main(){
	cin>>n;
	cin>>s;
	for(int i = 0; i < n; i++) {
		if(s[i] == 'A')	contA++;
		else	contD++;
	}
	if(contA < contD)	cout<<"Danik"<<endl;
	else if(contD < contA)	cout<<"Anton"<<endl;
	else	cout<<"Friendship"<<endl;
	return 0;
}
