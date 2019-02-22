#include<bits/stdc++.h>
using namespace std;
int	cap;
int maxCap = INT_MIN;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin>>a>>b;
		cap += (b - a);
		if(cap > maxCap)	maxCap = cap;
	}
	cout<<maxCap<<endl;
	return 0;
}
