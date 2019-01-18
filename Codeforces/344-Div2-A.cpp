#include<bits/stdc++.h>
using namespace std;
int arr[100005];
int main(){
	int n, group = 1;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 1; i < n; i++){
		if (arr[i] != arr[i+1]) group++;
	}
	cout<<group<<endl;
}
