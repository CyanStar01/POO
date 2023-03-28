#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    
    cout << "Digite operador desejado (+, -, *, /): ";
    cin >> op;
    cout << "Digite o Valor 1: ";
    cin >> num1;
    cout << "Digite o Valor 2: ";
    cin >> num2;
    
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        default:
            cout << "O operador digitado não foi reconhecido, por favor insira um operador válido";
            break;
        
    }

    return 0;
}