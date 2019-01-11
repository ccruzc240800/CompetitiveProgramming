#include<bits/stdc++.h>
using namespace std;
int cad[5];
int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<=2; j++)
		{
			int m;
			scanf("%d", &m);
			cad[j] += m;
		}	
	}
	
	if(cad[0] == 0 && cad[1] == 0 && cad[2] == 0)	cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
