#include<bits/stdc++.h>
using namespace std;
int a, b, c, sol;
int main() {
	cin>>a>>b>>c;
	sol = max(a+b+c, a*b*c);
	sol = max(sol, a*b+c);
	sol = max(sol, a+b*c);
	sol = max(sol, (a+b)*c);
	sol = max(sol, a*(b+c));
	cout<<sol<<endl;
	return 0;
}
