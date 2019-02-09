#include<bits/stdc++.h>
using namespace std;
char garl[200002];
char color[] = {'B', 'G', 'R'};
char order[3];
int main(){
	int n, inf = 2*(10e5);
	scanf("%d", &n);
	scanf("%s", garl);
	do {
		int change = 0;
		for (int i = 0; i < n; i++) {
			if( garl[i] != color[ i%3 ] ) {
				change++;
			}
		}
		if (change < inf) {
			inf = change;
			strcpy(order, color);
		}
	}
	while ( next_permutation( begin(color), end(color) ) );
	cout<<inf<<endl;
	for (int i = 0; i < n; i++) {
		cout<<order[ i%3 ];
	}
	cout<<endl;
	return 0;
}
