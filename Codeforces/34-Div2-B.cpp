#include<bits/stdc++.h>
using namespace std;
vector <int> arr;
int sumM;
int main() {
	int n, m;
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		int val;
		cin>>val;
		arr.push_back(val);
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i < m; i++) {
		if(arr[i] > 0) break;
		sumM += arr[i];
	}
	cout<<-sumM<<endl;
	return 0;
}
