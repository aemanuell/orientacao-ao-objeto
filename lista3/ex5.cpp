#include <iostream>

using namespace std;

class Int {
    private:
        int num;
    public:
        Int () : num(0){}
        
        void inicializar(int nro){
            num = nro;
        }

        void exibir(){
            cout << "o numero é: " << num << endl;
        }

        void add(Int, Int);

};

void Int::add(Int n1, Int n2){
    num = n1.num + n2.num;
}

int main(){

    Int val1, val2, val3;
    
    val2.inicializar(3);
    val3.inicializar(5);
    val1.add(val2, val3);
    val1.exibir();


    return 0;
}