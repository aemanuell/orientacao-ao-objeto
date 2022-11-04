#include <iostream>

using namespace std;

class livro {
    private:
        int livroID, paginas;
        float preco;
    public:
        void obter(){
            cout << "Digite o ID do livro: "; cin >> livroID;
            cout << "Digite o numero de páginas do livro: "; cin >> paginas;
            cout << "Digite o preço do livro: "; cin >> preco;
        }

        void mostrar (){
            cout << "O ID do livro é: " << livroID;
            cout << "O numero de páginas do livro é: " << paginas;
            cout << "O preço do livro é: " << preco;
        }

        void definir(int lid, int pg, float pr){
            livroID = lid;
            paginas = pg;
            preco = pr;
        }

        

        float mostrarpreco(){
            return (preco);
        }
};

int main(){

    livro livro1, livro2;

    livro1.obter();
    livro2.obter();

    if (livro1.mostrarpreco() > livro2.mostrarpreco()){
        livro1.mostrar();
    } else {
        livro2.mostrar();
    }
    


    return 0;
}