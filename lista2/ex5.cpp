#include <iostream>

using namespace std;

void parametros(int nro, char ch){
    for (int i = 1; i <= nro; i++){
        for (int i = 1; i <= 10; i++){
            cout << ch;
        }
        cout << "\n";
    }
}

int main(){

    int num; char c;

    cout << "Digite um número e um caracter ";
    cin >> num >> c;

    parametros(num, c);

    return 0;
}