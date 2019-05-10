#include<bits/stdc++.h>
using namespace std;
int k, r;
int main(){
	cin>>k>>r;
	int c = k % 10;
	for(int i = 1; i <= 10; i++) {
		if((i * c) % 10 == r){
			cout<<i<<endl;
			break;
		}
		if((i*c) % 10 == 0) {
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
