#include<bits/stdc++.h>
using namespace std;
int cad[5][5];
int main()
{
	int x=0, y=0;
	for(int i=0; i<=4; i++)
	{
		for(int j=0; j<=4; j++)
		{
			int m;
			scanf("%d", &m);
			cad[i][j] += m;
			if(m == 1)
			{
				x = i;
				y = j;
			}
		}	
	}
	
	cout<<abs(x-2) + abs(y-2);
	
	return 0;
}
