#include<bits/stdc++.h>
using namespace std;
int n, k, t = 0;
int main(){
	cin>>n>>k;
	for(int i = 1; i <= n; i++) {
		t += (5*i);
		if(t > 240 - k) {
			cout<<i-1<<endl;
			return 0;
		}
	}
	cout<<n<<endl;
	return 0;
}
