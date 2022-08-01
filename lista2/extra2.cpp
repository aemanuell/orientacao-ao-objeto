#include <iostream>

using namespace std;

void matriz (int nro){
    int aux=0;
    for (int i = 1; i <= nro; i++){
        for (int j = aux; j <= aux + nro -1; j++){
            cout << i + j << " ";
        }
        cout << "\n";
        aux += nro -1;
    }
}

int main(){
    int num;
    cout << "Digite um numero: ";
    cin >> num;

    matriz(num);

    return 0;
}