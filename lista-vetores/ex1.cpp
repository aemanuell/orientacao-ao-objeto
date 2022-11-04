#include <iostream>

using namespace std;

// int main(){
//     int num;
//     int vet[] = {0, 120, 250, 340, 430, 560, 980, 730, 820, 910};
//     cout << "digite um numero: ";
//     cin >> num;

//     for(int i=0; i<10; i++){
//         if (vet[i] == num){
//             cout << i;
//         }
//     };

// }
    

int main(){
    int vet[5];
    for(int i=0; i<5; i++){
        cout << "digite o " << i+1 <<"º numero: ";
        cin >> vet[i];
    };

    int num;
    cout << "digite um numero: ";
    cin >> num;

    for(int j=0; j<5; j++){
        if (vet[j] == num){
            cout << j+1;
        }
    };
}