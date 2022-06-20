#include <iostream>

using namespace std;

int main() {
    int n, quadrado=0, soma=0;
    
    cout << "Digite n positivo" << endl;
    cin >> n;
    for (int i=1; i <= n; i++) {
       quadrado = i*i;
       soma += quadrado;
    }
    cout << "A soma dos quadrados é: " << soma << endl;
    return 0;
}