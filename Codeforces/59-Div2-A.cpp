#include<bits/stdc++.h>
using namespace std;

char arr[105];

int main(){
	int up=0,low=0, i=0, j=0;
	scanf("%s", arr);

	while(arr[i] != '\0'){
		if(isupper(arr[i])) up++;
		if(islower(arr[i])) low++;
		i++;
	}

	while(arr[j] != '\0'){
		if(low < up){
			arr[103] = toupper(arr[j]);
			cout<<arr[103];
		}
		else{
			arr[103] = tolower(arr[j]);
			cout<<arr[103];
		}
		j++;
	}

	return 0;
}
