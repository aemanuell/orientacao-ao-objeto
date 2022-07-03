#include <iostream>

using namespace std;

void calcula(int nro1, int nro2, char ch){
    int res;

    switch(ch){
        case '+':
            res = nro1 + nro2;
            break;

        case '-':
            res = nro1 - nro2;
            break;

        case '*':
            res = nro1 * nro2;
            break;

        case '/':
            if(nro2 != 0.0){
                res = nro1 / nro2;
            } else{
                cout << "\nDivisao por zero!\n";
            }
            break;
        default:
            cout << "\nOperacao invalida!\n";
        }
            cout << "\nResultado: " << nro1 << " " << ch << " " << nro2 << " = " << res << "\n";
            
}

int main(){

    int num1, num2; char op;

    cout << "Digite um numero, uma operação e outro número: \n";
    cin >> num1 >> op >> num2;

    calcula(num1, num2, op);

    return 0;
}