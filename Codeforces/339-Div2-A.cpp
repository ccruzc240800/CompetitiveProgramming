#include<bits/stdc++.h>
using namespace std;
string arr;
vector<char> arr1;
int main() {
	cin>>arr;
	for(int i = 0; i < arr.size(); i++) {
		if(i % 2 == 0) 	arr1.push_back(arr[i]);
	}
	sort( begin(arr1), end(arr1) );
	for(int i = 0; i < arr1.size(); i++) {
		cout<<arr1[i];
		if( i != arr1.size() - 1) cout<<"+";
	}
	return 0;
}
