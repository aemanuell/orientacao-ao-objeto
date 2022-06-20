#include <iostream>

using namespace std;

int main() {
    int num_inicial, num_final;
    
    cout << "Digite o numero inicial e o numero final do ciclo:" << endl;
    cin >> num_inicial >> num_final;
    for (int i=num_inicial; i <= num_final; i++) {
       if ((i%2) == 0){
        cout << i << endl;
       }
    }
    return 0;
}