#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double resultado = 1.1123123;
    cout << setprecision (1) <<
        fixed << resultado << endl;
}