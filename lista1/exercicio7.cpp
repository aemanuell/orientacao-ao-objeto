#include <iostream>

using namespace std;

int main() {
    int soma=0;
    int k=5;
    for (int i=1; i <= 5; i++) {

         while (k>=i){
            cout << " ";
            k--;
         }

        for (int j = 1; j <= i ; j++){
           cout << i << " ";
        }
        cout << endl;
        k = 5;
    }
    return 0;
}