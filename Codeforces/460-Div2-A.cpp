#include<bits/stdc++.h>
using namespace std;
int n, m, sol = 0;
int main(){
	cin>>n>>m;
	for(int i = 1; n != 0; i++){
		if(i % m == 0)	n++;
		sol++;
		n--;
	}
	cout<<sol<<endl;
	return 0;
}
