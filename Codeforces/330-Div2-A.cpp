#include<bits/stdc++.h>
using namespace std;
char cake[13][13];
int row, col;
int main(){
	int r, c;
	cin>>r>>c;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++)	cin>>cake[i][j];	
	}
	for(int i = 0; i < r; i++) {
		int s = 0;
		for(int j = 0; j < c; j++){
			if(cake[i][j] == 'S') s++;
		}
		if(!s)	row++;
	}
	for(int j = 0; j < c; j++) {
		int s = 0;
		for(int i = 0; i < r; i++){
			if(cake[i][j] == 'S') s++;
		}
		if(!s)	col++;	
	}
	cout<<c*row + (r-row)*col<<endl;
	return 0;
}
