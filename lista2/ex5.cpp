#include <iostream>

using namespace std;

struct parametros
{
    int numumero;
    char caracter;
};


void param(int nro, char ch){
    for (int i = 1; i <= nro; i++){
        for (int i = 1; i <= 10; i++){
            cout << ch;
        }
        cout << "\n";
    }
}

int main(){
    parametros argumentos;

    cout << "Digite um número e um caracter ";
    cin >> argumentos.numumero >> argumentos.caracter;

    param(argumentos.numumero, argumentos.caracter);

    return 0;
}