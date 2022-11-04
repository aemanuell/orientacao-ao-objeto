#include <iostream>

using namespace std;

int main(){
    int idade[4];

    for(int j=0; j<4; j++){
        cout << "Digite uma idade: ";
        cin >> idade[j];
    }
    
    for(int j=0; j<4; j++){
        cout << "Idade digitada: " << idade[j] << endl;
    }

    return 0;
}