#include <iostream>

using namespace std;

class Cartesiano {
    private:
        float num1, num2;
    public:
        Cartesiano () : num1(0), num2(0){}
        Cartesiano (float numero1, float numero2) : num1(numero1), num2(numero2){}
        
        void dc(){
            cout << "Digite o primeiro numero: "; cin >> num1;
            cout << "Digite o segundo numero: "; cin >> num2;
        };

        void entrada_dados(Cartesiano);

        void mostra_dados();

};

void Cartesiano::entrada_dados(Cartesiano nro){
    num1 = nro.num1;
    num2 = nro.num2;
}

void Cartesiano::mostra_dados(){
    cout << "numero 1: " << num1 << endl; 
    cout << "numero 2: " << num2 << endl;
}

int main(){

    Cartesiano dados;
    dados.dc();
    dados.mostra_dados();


    return 0;
}