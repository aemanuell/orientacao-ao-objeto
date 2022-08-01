#include <iostream>

using namespace std;

class dados_raio {
    private:
        float raio;
    public:
        void le_raio(){
            cout << "Digite o raio: "; cin >> raio;
        }

        void area(){
            cout << "A área é: " << 3.14159265359 * raio * raio << endl;
        }

        void circum(){
            cout << "A circunferência é: " << 2 * 3.14159265359 * raio << endl;
        }
};

int main(){

    dados_raio notas;
    notas.le_raio();
    notas.area();
    notas.circum();

    return 0;
}