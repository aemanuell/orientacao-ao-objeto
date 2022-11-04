#include <iostream>

using namespace std;

class modelo {
    private:
        int num1;
        float num2;
    public:
        modelo () : num1(0), num2(0){}
        modelo (int numero1, float numero2) : num1(numero1), num2(numero2){}
        
        void x(){
            cout << "Digite o primeiro numero: "; cin >> num1;
            cout << "Digite o segundo numero: "; cin >> num2;
        };

        void y(){
            num1 = 3*num1;
            num2 = 3*num2;
        }

        void le_dados(modelo);

        void escreve_dados();

};

void modelo::le_dados(modelo dado){
    dado = 
}

void modelo::escreve_dados(){
    y();
}

int main(){

    modelo dados;
    dados.x();
    dados.escreve_dados();


    return 0;
}