#include<bits/stdc++.h>
using namespace std;
float percent;
int total;
int main() {
	cin>>total;
	for(int i = 0; i < total; i++) {
		float m;
		cin>>m;
		percent += m;
	}
	printf("%.5f \n", percent/total);
	return 0;
}
