#include<bits/stdc++.h>
using namespace std;
int width;
int main(){
	int n, h, m;
	scanf("%d %d", &n, &h);
	for(int i = 1; i <= n; i++){
		scanf("%d", &m);
		if(m <= h)	width += 1;
		else	width += 2;
	}
	cout<<width<<endl;
}
