#include<bits/stdc++.h>
using namespace std;
int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477};
int num;
int main(){
    cin>>num;
    for(int i = 0; i < 10; i++) {
        if(num % arr[i] == 0) {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
