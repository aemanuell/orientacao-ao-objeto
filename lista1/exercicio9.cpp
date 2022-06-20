#include <iostream>

using namespace std;

int main(){
    float ctemp, ftemp, res;
    char temp;
    cout << "Entre com a temperatura, 'c' para celcius para fazer conversao em fahrenheit e 'f' para fahrenheit para converter em celcius: " << endl;
    cin >> temp;
    if(temp == 'c'){
        cout << "Entre com a temperatura: " << endl;
        cin >> ftemp;
        res = (ftemp - 32) * (5.0/9);
        cout << "Equivalent in Celsius is: " << res << "\n";
    } else if (temp == 'f'){
        cout << "Entre com a temperatura: " << endl;
        cin >> ctemp;
        res = (ctemp *(9/5.0))+32;
        cout << "Equivalent in Celsius is: " << res << "\n";
    }
    return 0; 
}