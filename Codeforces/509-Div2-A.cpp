#include<bits/stdc++.h>
using namespace std;
int n;
int comb(int n, int k) {
	if (n == 0 || k == 0 || k == n)	return 1;
	return comb(n-1, k-1) + comb(n-1, k);
}
int main(){
	cin>>n;
	cout<<comb(2*(n-1), n - 1)<<endl;
	return 0;
}
