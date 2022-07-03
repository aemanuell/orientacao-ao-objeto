#include <iostream>

using namespace std;

int multiplo(int nro1, int nro2){
    if(nro2%nro1 == 0){
        return 1;
    } else {
        return 0;
    }
}

int main(){

    int num1, num2;

    cout << "Digite dois números ";
    cin >> num1 >> num2;

    if (multiplo(num1, num2)){
        cout << "São multiplos\n";
    } else {
        cout << "Não são multiplos\n";
    }
    

    return 0;
}