#include<bits/stdc++.h>
using namespace std;
int n, cont;
int main() {
	cin>>n;
	for(int i = 1; i < n; i++) {
		if((n-i) % i == 0)	cont++;
	}
	cout<<cont<<endl;
	return 0;
}
