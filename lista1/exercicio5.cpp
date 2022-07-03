#include <iostream>
#include <string.h>

using namespace std;

int main() {
    // char str[100], first_char, last_char;
    // int aux=0;

    // scanf("%s", str);
    // first_char = str[0];
    // aux = strlen(str);
    // // printf("%d aux", aux);
    
    // for(int i=0;i<strlen(str);i++){
    //     // printf("%c ",str[i]);
    //     if (i == aux-1){
    //         last_char = str[i];
    //     }
    // }

    // printf("%c primeiro\n",first_char);
    // printf("%c ultimo\n",last_char);

    int num=0, mes=0, ms=0, num_aux = 0, i=0;

    cin >> num;
    num_aux = num;
    mes = num_aux%10;

    do {
        ms=num_aux/10;
        num_aux = ms;
    } while (ms > 10);

    cout << ms;
    cout << "\n";
    cout << mes;


}