#include<bits/stdc++.h>
using namespace std;
int minR = INT_MAX;
vector <int> arr;
int main() {
	int n, m;
	cin>>n>>m;
	for(int i = 0; i < m; i++){ 
		int val;
		cin>>val;
		arr.push_back(val);
	}
	sort( arr.begin(), arr.end() );
	for(int i = 0; i+n-1 < m; i++) {
		int res = arr[i+n-1] - arr[i];
		if(res < minR)	minR = res;
		if (!(minR)) break;
	}
	cout<<minR<<endl;
  return 0;
}
