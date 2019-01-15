#include<bits/stdc++.h>
using namespace std;

char arr[1005];

int main(){
	int i=0;
	scanf("%s", arr);

	while(arr[i] != '\0'){
		if(i == 0){
			arr[1003] = toupper(arr[0]);
			cout<<arr[1003];
		}
		else cout<<arr[i];
		i++;
	}

	return 0;
}
