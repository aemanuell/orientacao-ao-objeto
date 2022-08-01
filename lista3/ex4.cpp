#include <iostream>

using namespace std;

class livro {
    private:
        int livroID, paginas;
        float preco;
    public:
        void obter(int lid, int pg, float pr){
            livroID = lid;
            paginas = pg;
            preco = pr;
        }

        void definir(int lid, int pg, float pr){
            
        }

        void mostrar (){
            cout << "O ID do livro, paginas, e preço, respectivamente são: " << livroID << paginas << preco;
        }

        int mostrarpreco(){
            return preco;
        }
};

void livro::mostrar(){
    if (mostrarpreco() > preco){
            cout << "sim";
    }
    
}

int main(){

    livro livro1;

    livro1.obter(10, 20, 30.5);
    livro1.mostrar();

    return 0;
}