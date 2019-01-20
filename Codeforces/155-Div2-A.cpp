#include<bits/stdc++.h>
using namespace std;
int arr[1005];
int main() {
	int n, cont = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	int max = arr[0], min = arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
			cont++;
		}
		if(arr[i] > max) {
			max = arr[i];
			cont++;
		}
	}
	cout<<cont<<endl;
	return 0;
}
