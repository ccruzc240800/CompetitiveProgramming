#include<bits/stdc++.h>
using namespace std;
int cont;
bool check(int m){
	int raiz = (int)sqrt(m);
	if(raiz * raiz == m)	return true;
	else	return false;
}
int main(){
	int n;
	cin>>n;
	int max = n*n;
	for(int a = 1; a <= n; a++) {
		for(int b = a; b <=n; b++){
			int c2 = a*a + b*b;
			if(check(c2) && c2 <= max){
				cont++;
			}	
		}	
	}
	cout<<cont<<endl;
	return 0;
}
