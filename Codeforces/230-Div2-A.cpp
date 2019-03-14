#include<bits/stdc++.h>
#define LL long long
using namespace std;
LL s, n;
vector<pair<int, int>> dragon;
int main() {
	cin>>s>>n;
	for(int i = 0; i < n; i++) {
		int power, bonus;
		cin>>power>>bonus;
		dragon.push_back(pair<int, int> (power, bonus));
	}
	sort(dragon.begin(), dragon.end());
	for(int i = 0; i < n; i++) {
		if(s > dragon[i].first) s += dragon[i].second;
		else {
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}
