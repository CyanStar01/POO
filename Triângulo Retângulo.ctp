#include <iostream>
using namespace std;

int main() { // chave principal onde nosso código vai ser escrito
    float cateto1, cateto2, area; // float palavra: cria os algoritmos que iremos usar
    
    cout << "Digite o valor do cateto 1: "; // faz uma pergunta ao usuario
    cin >> cateto1; // registra a resposta do usuario como o valor de um algoritmo
    cout << "Digite o valor do cateto 2 "; // faz uma pergunta ao usuario
    cin >> cateto2; // registra a resposta do usuario como o valor de um algoritmo
    
    area = (cateto1 * cateto2) / 2; //usa os valores dados pelo usuario para determinar o valor do algoritmo "area"
    
    cout << "A area do retângulo é: " << area << endl; // mostra a solução do problema ao usuario e termina a linha de código

    return 0;
}