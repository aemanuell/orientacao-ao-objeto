#include <iostream>

using namespace std;

int main() {
    char caractere;

    cout << "Digite um carctere ";
    cin >> caractere;

    switch(caractere)
        {
        case 'A':
        case 'a':
            cout << "vogal";
            break;

        case 'E':
        case 'e':
            cout << "vogal";
            break;
        case 'I':
        case 'i':
            cout << "vogal";
            break;

        case 'O':
        case 'o':
            cout << "vogal";
            break;
        case 'U':
        case 'u':
            cout << "vogal";
            break;
        default:
            printf("Consoante\n");
        }
        
    return 0;
}