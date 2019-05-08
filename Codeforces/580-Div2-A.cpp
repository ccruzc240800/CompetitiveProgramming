#include<bits/stdc++.h>
using namespace std;
int n, p, q;
int sol = 0, cont = 1;
int main(){
	cin>>n;
	cin>>p;
	for(int i = 1; i < n; i++) {
		cin>>q;
		if(p <= q) {
			cont++;
			p = q;
		}
		else {
			sol = max(cont, sol);
			cont = 1;
			p = q;
		}
	}
	sol = max(cont, sol);
	cout<<sol<<endl;
	return 0;
}
