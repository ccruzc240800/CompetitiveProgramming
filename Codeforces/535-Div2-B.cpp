#include<bits/stdc++.h>
using namespace std;
int cont, aux;
string str;
int main() {
    cin>>str;
    int tam = str.size();
    cont = (1<<tam) - 1;
    for(int i = 0; i < str.size(); i++) {
        if(str[i] == '4')   aux = (aux | (0<<tam-1-i));
        else    aux = (aux | (1<<tam-1-i));
    }
    cout<<cont+aux<<endl;
    /*for(int i = 0; i < tam; i++) {
        for(int j = 0; j < (1<<(i+1)); j++) {
            string tmp;
            for(int k = i; k >= 0; k--) {
                int bit = ((j>>k) & 1);
                if(bit) tmp.append("7");
                else    tmp.append("4");
            }
            cont++;
            if(str == tmp) {
                cout<<cont<<endl;
                return 0;
            }
            tmp.clear();
        }
    }*/
    return 0;
}
