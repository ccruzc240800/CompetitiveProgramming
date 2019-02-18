#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	for(int i = -n; i <= n; i++) {
		for(int j = -n; j <= n-abs(i); j++) {
			int m = abs(i) + abs(j);
			if(m <= n)	cout<<abs(m-n);
			else cout<<" ";
			if(j != n-abs(i)) cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
