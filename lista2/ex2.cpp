#include <iostream>

using namespace std;

void recebeNum(int nro){
    for(int i=1; i<=10; i++){
        cout << nro << " * " << i << " = " << nro*i << "\n";
    }
}

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    recebeNum(num);

    return 0;
}