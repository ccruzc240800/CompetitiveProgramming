#include<bits/stdc++.h>
using namespace std;
vector<int> arr(105);
int main(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	sort (arr.begin(), arr.begin()+n);
	for (int i = 0; i < n; i++) {
		cout<<arr[i]<<" ";
	}
	return 0;
}
