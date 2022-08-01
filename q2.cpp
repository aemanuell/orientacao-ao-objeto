// #include <iostream>

// using namespace std;

// struct avaliacao{
//     float nota;
//     char grau;
// };

// int main(){
//     int aux = 0;
//     avaliacao avalia;

//     for (int i = 1; i <= 3; i++){
//         do {
//             cout << "Digite uma nota válida (0 a 10.0) " << endl;
//             cin >> avalia.nota; 
//         } while (avalia.nota > 10 || avalia.nota < 0);

//         if (avalia.nota >= 0 && avalia.nota <= 4){
//             avalia.grau = 'I';
//         } else if (avalia.nota >= 4.1 && avalia.nota <= 6.9){
//             avalia.grau = 'M';
//             aux++;
//         } else if (avalia.nota >= 7.0 && avalia.nota <= 10){
//             avalia.grau = 'S';
//             aux++;
//         }

//         cout << "Estudante " << i << " Aprovado, com a nota: " << avalia.nota << " grau: " << avalia.grau << endl; 
//     }

//         cout << "Número de estudantes aprovados: " << aux << endl;
// }


// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

    struct avaliacao{
        float nota;
        char grau;
    };

    int exibe(int x, avaliacao);

    int main(){
        avaliacao d; int i, x, aprovados=0;
        for(i=1; i<=4; i++){

            do{
                cout<<"Digite a nota";
                cin>>d.nota;
            }while((d.nota<0)||(d.nota>10));

            cout<<"Digite o grau";
            cin>>d.grau;
            x= exibe(x,d);
            aprovados=aprovados+x;
        }

        cout<<"Numeros de aprovados: "<<aprovados;
    }
    //

    int exibe(int x,avaliacao dx){
        int tot=0;
        if(dx.nota>=7){
            tot=tot+1;
            cout<<"Estudante "<<x<<"aprovado, nota: "<<dx.nota;
            cout<<"Grau "<<dx.grau<<endl;
        }
        return(tot);
    }