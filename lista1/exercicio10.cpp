#include <iostream>

using namespace std;

int main() {

    float a, b, soma, sub, multi, div, res;
    char op, nova;

    cout << "num1: " << endl;
    cin >> a;
    cout << "op: " << endl;
    cin >> op;
    cout << "num2: " << endl;
    cin >> b;


    do {
        switch(op)
        {
        case '+':
            res = a + b;
            break;

        case '-':
            res = a - b;
            break;

        case '*':
            res = a * b;
            break;

        case '/':
            if(b != 0.0){
            res = a / b;}
        else
        {
        printf("\nDivisao por zero!\n");
        }
            break;
        default:
            printf("\nOperacao invalida!\n");
        }
            printf("\nResultado: %.2f %c %.2f = %.2f\n", a, op, b, res);
            cout << "Deseja realizar uma nova operação? ";
            cin >> nova;
    }while ((nova == 's') || (nova == 'S'));
        

    return 0;
}