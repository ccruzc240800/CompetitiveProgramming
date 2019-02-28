#include<bits/stdc++.h>
using namespace std;
int arr[100005];
long long p, s;
int main(){
	int n;
	cin>>n;
	for(int i = 0; i < n; i++) {
		int p;
		cin>>p;
		arr[p] = i;
	}
	int m;
	cin>>m;
	for(int i = 0; i < m; i++) {
		int num;
		cin>>num;
		p += arr[num]+1;
		s += n-arr[num];
	}
	cout<<p<<" "<<s<<endl;
	return 0;
}
