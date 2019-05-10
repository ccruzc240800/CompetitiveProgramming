#include<bits/stdc++.h>
using namespace std;
int l[35], v[35];
int n, cont = 0;
int main(){
	cin>>n;
	for(int i = 0; i < n; i++) {
		cin>>l[i];
		cin>>v[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j)	continue;
			if(l[i] == v[j])	cont++;
		}
	}
	cout<<cont<<endl;
	return 0;
}
