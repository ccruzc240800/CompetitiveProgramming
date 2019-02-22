#include<bits/stdc++.h>
using namespace std;
vector <int> arr(12);
int size;
int months;
int main() {
	int k;
	cin>>k;
	for(int i = 0; i < 12; i++)	cin>>arr[i];
	sort(arr.begin(), arr.end());
	reverse(arr.begin(), arr.end());
	for(int i = 0; i < 12; i++) {
		if(size <  k) {
			size += arr[i];
			months++;
		}
		else break;
	}
	(size < k) ? cout<<"-1"<<endl : cout<<months<<endl;
	return 0;
}
