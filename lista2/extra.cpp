#include <iostream>

using namespace std;

void matriz (){}


int main(){
    int aux=0, aux2=0;
    for (int i = 1; i <= 3; i++){
        for (int j = aux; j <= aux + 2; j++){
            cout << i + j << " ";
        }
        cout << "\n";
        aux += 2;
    }

    cout << "***********************************\n";

    for (int i = 1; i <= 4; i++){
        for (int j = aux2; j <= aux2 + 3; j++){
            cout << i + j << " " ;
        }
        cout << "\n";
        aux2 += 3;
    }
}