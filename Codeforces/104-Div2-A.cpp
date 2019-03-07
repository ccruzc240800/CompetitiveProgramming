#include<bits/stdc++.h>
using namespace std;
int main(){
	int sum;
	cin>>sum;
	if(0<= sum && sum<=10)	cout<<"0"<<endl;
	else if(sum <= 19)	cout<<"4"<<endl;
	else if(sum <= 20)	cout<<"15"<<endl;
	else if(sum <= 21)	cout<<"4"<<endl;
	else cout<<"0"<<endl;
	return 0;
}
