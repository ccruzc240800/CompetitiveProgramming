#include<bits/stdc++.h>
using namespace std;
bool arr[100005];
int dra;
int main() {
	int k, l, m, n, d;
	cin>>k>>l>>m>>n>>d;
	for(int i = 1; i <= d; i++) {
		if (i % k == 0) arr[i] = 1;
		if (i % l == 0) arr[i] = 1;
		if (i % m == 0) arr[i] = 1;
		if (i % n == 0) arr[i] = 1;
	}
	for(int i = 1; i <= d; i++) {
		if (arr[i]) dra++;
	}
	cout<<dra<<endl;
	return 0;
}
