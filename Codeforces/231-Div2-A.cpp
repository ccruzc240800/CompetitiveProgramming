#include<bits/stdc++.h>
using namespace std;
int main() {
	int n, prob=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int a, b, c;
		scanf("%d %d %d", &a, &b, &c);
		if (a+b+c >= 2) prob++;
	}
	cout<<prob<<endl;
	return 0;
}
