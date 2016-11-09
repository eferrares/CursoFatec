#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        int nProd,tot=0,p,q,trocoP;
        cin >> nProd;
        while(nProd--){
            cin >> q >> p;
            tot+= q * p;
        }
        cin >> trocoP;
        tot = trocoP - tot;
        if(tot < 0){
            cout << "DINHEIRO INSUFICIENTE\n";
       }else{
            cout << tot << endl;
        }
    }
    return 0;
}

