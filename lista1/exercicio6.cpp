#include <iostream>

using namespace std;

int main() {
    int soma=0;
    for (int i=1; i <= 5; i++) {
        soma += i; 

        for (int j = 1; j <= i ; j++){
            if (j==i){
                cout << j;
            } else {
                cout << j << "+";
            }
            
        }
        cout << "=" << soma ;
        cout << endl;
    }
    return 0;
}