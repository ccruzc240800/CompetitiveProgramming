#include<bits/stdc++.h>
using namespace std;
vector<int> arr, aux;
int way, tmp;
int n, l, r, x;
void bt (int cap, int pos) {
	if (pos == n || cap == 0) {
		if(l <= tmp && tmp <= r) {
			if(aux.back() - aux.front() >= x)	way++;
		}
		return;
	}
	if(arr[pos] > cap) bt (cap, pos+1);
	else {
		tmp += arr[pos];
		aux.push_back(arr[pos]);
		bt(cap - arr[pos], pos+1);
		tmp -= arr[pos];
		aux.pop_back();
		bt(cap, pos+1);
	}
}
int main(){
	cin>>n>>l>>r>>x;
	for(int i = 0; i < n; i++){
		int m;
		cin>>m;
		arr.push_back(m);
	}
	sort(arr.begin(), arr.end());
	bt (r, 0);
	cout<<way<<endl;
	return 0;
}
