#include<bits/stdc++.h>
using namespace std;
char arr[5];
int main() {
	int n, x = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%s", arr);
		(arr[1] == '+') ? x++ : x--;
	}
	cout<<x<<endl;
	return 0;
}
