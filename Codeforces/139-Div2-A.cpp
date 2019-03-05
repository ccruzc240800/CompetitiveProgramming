#include<bits/stdc++.h>
using namespace std;
int day[10];
int pag, f_day;
void read(){
	for(int i = 0; i < 7; i++) {
		pag -= day[i];
		if(pag <= 0) {
			f_day = i+1 ;
			break;
		}
	}
}
int main(){
	cin>>pag;
	for(int i = 0; i < 7; i++)	cin>>day[i];
	while(pag > 0) {
		read();
	}
	cout<<f_day<<endl;
	return 0;
}
