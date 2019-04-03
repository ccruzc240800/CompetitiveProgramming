#include<bits/stdc++.h>
using namespace std;
string s;
set<char> s1;
int main(){
    cin>>s;
    for(int i = 0; i < s.size(); i++) {
        s1.insert(s[i]);
    }
    (s1.size() % 2) ? cout<<"IGNORE HIM!"<<endl : cout<<"CHAT WITH HER!"<<endl;
    return 0;
}
