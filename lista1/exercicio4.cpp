#include <iostream>

using namespace std;

int main() {
    int n, quadrado=0, soma=0;

    do {
        cout << "Digite n positivo" << endl;
        cin >> n;
    }while(n<0);
    
    for (int i=1; i <= n; i++) {
       quadrado = i*i;
       soma += quadrado;
    }
    cout << "A soma dos quadrados é: " << soma << endl;
    return 0;
}