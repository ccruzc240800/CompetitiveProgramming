#include<bits/stdc++.h>
using namespace std;
int n, cOdd, cEven, iOdd, iEven;
int main() {
	cin>>n;
	for(int i = 0; i < n; i++) {
		int m;
		cin>>m;
		if(m % 2) {
			cOdd++;
			iOdd = i + 1;
		}
		else {
			cEven++;
			iEven = i + 1;
		}
	}
	if(cEven == 1)	cout<<iEven<<endl;
	else	cout<<iOdd<<endl;
	return 0;
}
