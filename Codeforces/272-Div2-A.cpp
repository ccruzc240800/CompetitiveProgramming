#include<bits/stdc++.h>
using namespace std;
int fingers;
int ways;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		int m;
		cin>>m;
		fingers += m;
	}
	for(int i = 1; i <= 5; i++) {
		if((fingers + i) % (n+1) != 1)	ways++;
	}
	cout<<ways<<endl;
	return 0;
}
