#include <iostream>

using namespace std;

int main(){
    int ftemp;

    cout << "Enter temperatura in fahrenheit ";
    cin >> ftemp;

    float ctemp = (ftemp - 32) * (5.0/9);
    cout << "Equivalent in Celsius is: " << ctemp << "\n";

    return 0; 
}