#include<bits/stdc++.h>
using namespace std;
char arr[105];
int main(){
	int n, ext = 0;
	scanf("%d", &n);
	scanf("%s", arr);
	for (int i = 0; i < n-1; i++){
		if(arr[i] == arr[i+1])	ext++;
	}
	cout<<ext<<endl;
	return 0;
}
