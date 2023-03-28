#include <iostream>
using namespace std;

int main() {
    int num, i = 1;
    
    cout << "Digite um numero inteiro positivo: ";
    cin >> num;
    
    while(i <= num) {
        cout << i << " ";
        i++;
    }

    return 0;
}