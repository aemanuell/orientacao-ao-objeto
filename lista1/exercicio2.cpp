#include <iostream>

using namespace std;

int main() {
    char caractere, carac;

    cout << "Digite um carctere ";
    cin >> caractere;

    if(caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U' || caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
        cout << "vogal \n";
    } else {
        cout << "consoante \n";
    }

    return 0;
}