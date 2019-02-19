#include<bits/stdc++.h>
using namespace std;
int temp = INT_MAX;
int pos;
bool flag;
int main(){
	int n;
	cin>>n;
	for(int i = 1; i <= n; i++) {
		int m;
		cin>>m;
		if(m < temp) {
			temp = m;
			flag = true;
			pos = i;
			continue;
		}
		if(m == temp) flag = false;
	}
	if(flag)	cout<<pos<<endl;
	else	cout<<"Still Rozdil"<<endl;
	return 0;
}
