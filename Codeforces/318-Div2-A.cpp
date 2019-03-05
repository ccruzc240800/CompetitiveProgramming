#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll n, k;
	cin>>n>>k;
	ll idx = (n + 1) / 2;
	if(k <= idx)	cout<<2*k - 1<<endl;
	else cout<<2*(k-idx)<<endl;
	return 0;
}		
