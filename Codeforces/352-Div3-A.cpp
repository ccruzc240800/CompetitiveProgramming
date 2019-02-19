#include<bits/stdc++.h>
using namespace std;
int cont5;
int fin5;
int cont0;
int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		int m;
		cin>>m;
		(m == 5) ? cont5++ : cont0++;
		if(cont5 % 9 == 0)	fin5 = cont5;
	}
	if(cont0 == 0) cout<<"-1"<<endl;
	else {
		if(fin5 == 0)	cout<<"0"<<endl;
		else {
			for(int i = 0; i < fin5; i++) cout<<"5";
			for(int i = 0; i < cont0; i++) cout<<"0";
			cout<<endl;
		}
	}
	return 0;
}
