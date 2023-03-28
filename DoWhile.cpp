#include <iostream>
using namespace std;

int main() {
    int num;
    
    do {
        cout << "Digite um numero entre 1 e 10: ";
        cin >> num;
    } while(num < 1 || num > 10);
    
    cout << "Você digitou o numero " << num << ".";

    return 0;
}