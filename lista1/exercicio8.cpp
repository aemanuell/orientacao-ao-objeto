#include <iostream>
#include <iomanip>

using namespace std;

// int main() {
//    int num;

//     for(num = 1; num <= 10; num++){
//         cout << num;
//         int quadrado = num*num;
//         cout << setw(5) << quadrado;
//         int cube = num*num*num;
//         cout << setw(8) << cube << endl;
//     }
//     return 0;
// }

int main(){
    int num, aux = 0;
    cin >> num;

    for(int i=1; i<=3; i++){
        for (int j=1; j <= 10; j++){
            cout << num*j + aux << " ";
        }
        aux = num*10*i;
        cout << endl;
    }
}