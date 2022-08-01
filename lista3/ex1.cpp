#include <iostream>

using namespace std;

class marca {
    private:
        int nota1, nota2, nota3;
    public:
        void entrada(){
            cout << "Digite a nota1: "; cin >> nota1;
            cout << "Digite a nota2: "; cin >> nota2;
            cout << "Digite a nota3: "; cin >> nota3;
        }

        void soma(){
            cout << "A soma é: " << nota1 + nota2 + nota3 << endl;
        }

        void media(){
            cout << "A media é: " << (nota1 + nota2 + nota3)/3 << endl;
        }
};

int main(){

    marca notas;
    notas.entrada();
    notas.soma();
    notas.media();

    return 0;
}