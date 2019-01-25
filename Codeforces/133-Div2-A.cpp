#include<bits/stdc++.h>
using namespace std;
char arr[103];
int main() {
	gets(arr);
	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'H' || arr[i] == 'Q' || arr[i] == '9') {
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
