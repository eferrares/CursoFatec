#include<iostream>
using namespace std;

int resposta(int n){
    int soma = 0;
    return (n * (n + 1)) / 2;
}

int main(){
    int n;
    while(cin >> n && n != 0){
        cout << resposta(n) << endl;
    }
    return 0;
}