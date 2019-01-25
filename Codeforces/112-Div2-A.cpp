#include<bits/stdc++.h>
using namespace std;
char arr1[103];
char arr2[103];
int main() {
	cin>>arr1>>arr2;
	for (int i = 0; i < strlen(arr1); i++) {
		arr1[i] = toupper (arr1[i]);
		arr2[i] = toupper (arr2[i]);
	}
	int ret = strcmp(arr1, arr2);
	if (ret < 0) cout<<-1<<endl;
	else if (ret == 0) cout<<0<<endl;
	else cout<<1<<endl;
	return 0;
}
