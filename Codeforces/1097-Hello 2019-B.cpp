#include<bits/stdc++.h>
using namespace std;
int arr[15];
int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
	for (int mask = 0; mask < (1 << n); mask++) {
		int end = 0;
		for (int bit = 0; bit < n; bit++) {
			if ( (mask >> bit) & 1) end += arr[bit];
			else end -= arr[bit];
		}
		if (end % 360 == 0) {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
