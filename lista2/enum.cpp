#include <iostream>
using namespace std;

enum dias_da_semana {Dom, Seg, Ter, Qua, Qui, Sex, Sab };

int main (){
    int dif;
    dias_da_semana dia1, dia2;
    dia1 = Sab;
    dia2 = Dom;

    dif = dia2 - dia1;
    cout << "A diferença entre os dias é: " << dif << endl;

    if (dia1 < dia2 ){
        cout << "dia1 aparece antes do dia2\n";
    }
    
    return 0;
}