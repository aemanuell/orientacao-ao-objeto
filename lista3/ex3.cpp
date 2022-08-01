#include <iostream>

using namespace std;

class estudante {
    private:
        float nota;
        int grau;
    public:
        void obtem_nota_grau(float nt, int gr){
            nota = nt;
            grau = gr;
        }

        void mostra_nota_grau(){
            cout << nota << " e " << grau;
        }
};

int main(){

    estudante estudante1, estudante2;
    
    estudante1.obtem_nota_grau(5.5, 2);
    estudante2.obtem_nota_grau(9.4, 3);

    cout << "O estudante 1 tem nota e grau, respectivamente: "; estudante1.mostra_nota_grau(); cout << endl;
    cout << "O estudante 2 tem nota e grau, respectivamente: "; estudante2.mostra_nota_grau(); cout << endl;

    return 0;
}