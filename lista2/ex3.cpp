#include <iostream>

using namespace std;

void predecessorSucessor(int nro){
    cout << "O predecessor de " << nro << " é: " << nro - 1 << "\n";
    cout << "O sucessor de " << nro << " é: " << nro + 1 << "\n";
}

int main(){

    int num;

    cout << "Digite um número: ";
    cin >> num;

    predecessorSucessor(num);

    return 0;
}