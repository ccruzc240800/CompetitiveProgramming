#include<bits/stdc++.h>
using namespace std;
int n, m , k, cont;
int army[1005];
int main() {
	cin>>n>>m>>k;
	for(int i = 0; i <= m; i++)	cin>>army[i];
	for(int i = 0; i < m; i++) {
		int friendly = __builtin_popcount(army[i] ^ army[m]);
		if(friendly <= k)	cont++;
	}
	cout<<cont<<endl;
	return 0;
}
