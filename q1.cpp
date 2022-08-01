#include <iostream>

using namespace std;

int main(){
    int num; char ch = 65, aux;
    cout << "Digite a altura de um triângulo: \n";
    cin >> num;

    for(int i = 1; i <= num; i++){
        for(int j = 0; j < i; j++){
            cout << ch++;
        }
        cout << "\n";
    }
}