#include<bits/stdc++.h>
using namespace std;
int x[205];
int y[205];
int sc;
int main() {
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) cin>>x[i]>>y[i];
	for(int i = 0; i < n; i++) {
		int a=0, d=0, s=0, w=0;
		for(int j = 0; j < n; j++) {
			if(x[i] == x[j] && y[i] < y[j])	w++;
			if(x[i] == x[j] && y[i] > y[j])	s++;
			if(x[i] < x[j] && y[i] == y[j])	d++;
			if(x[i] > x[j] && y[i] == y[j])	a++;
			if(a && d && s && w) {
				sc++;
				break;
			}
		}
	}
	cout<<sc<<endl;
	return 0;
}
