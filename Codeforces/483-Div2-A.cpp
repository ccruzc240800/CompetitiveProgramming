#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll l, r;
int main() {
	cin>>l>>r;
	if(r - l < 2) {
		cout<<"-1"<<endl;
		return 0;
	}
	for(ll i = l; i <= r - 2 ; i++) {
		for(ll j = i + 1; j <= r - 1; j++) {
			if(__gcd(i, j) != 1)	continue;
			for(ll k = i + 2; k <= r; k++) {
				if(__gcd(j, k) != 1)	continue;
				if(__gcd(i, k) == 1) 	continue;
				cout<<i<<" "<<j<<" "<<k<<endl;
				return 0;
			}
		}
	}
	cout<<"-1"<<endl;
	return 0;
}
