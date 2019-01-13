#include<bits/stdc++.h>
using namespace std;

int main()
{
  int y;
	scanf("%d", &y);

	for(int i=y+1; i<=9012; i++)
	{
		int u=i%10, d=(i/10)%10, c=(i/100)%10, m=i/1000;
		if(u!=d && u!=c && u!=m && d!=c && d!=m && c!= m)
		{
			cout<<m<<c<<d<<u;
			break;
		}
	}
	
	return 0;
}
