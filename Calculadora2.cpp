#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;
    char stop;
    
    do{
    cout << "Digite operador desejado (+, -, *, /): ";
    cin >> op;
    cout << "Digite o Valor 1: ";
    cin >> num1;
    cout << "Digite o Valor 2: ";
    cin >> num2;
    
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            break;
        default:
            cout << "O operador digitado nao foi reconhecido, por favor insira um operador valido";
            break;
    }
    
    cout << "Desejar fazer outro calculo? Digite 's' para Sim e 'n' para Nao: ";
    cin >> stop;
    } while(stop == 's');
    
    return 0;
}