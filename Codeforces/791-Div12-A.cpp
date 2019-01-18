#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	while(a<=b){
		a *= 3;
		b *= 2;
		t++;
	}
	cout<<t<<endl;
	return 0;
}
