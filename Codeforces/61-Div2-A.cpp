#include<bits/stdc++.h>
using namespace std;

char first[105];
char second[105];
int main(){

	scanf("%s %s", first, second);

	int i=0;
	while(first[i] != '\0')
	{
		if(first[i] == second[i]) cout<<"0";
		else cout<<"1";
		i++;
	}
	
	return 0;
}
