#include<bits/stdc++.h>
using namespace std;

int primo(int a){
	for(int i=2; i<=(int)sqrt(a); i++){
		if (a % i == 0) return 0;
	}

	return 1;
}

int main(){
	int x, y, i;

	scanf("%d %d", &x, &y);

	for(i=x+1; i<=y; i++){
		if(primo(i)) break;
	}
	
	if(i == y) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
