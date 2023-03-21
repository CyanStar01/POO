#include <iostream>
using namespace std;

int main() { // chave principal onde nosso código vai ser escrito
    float base, altura, area; // float palavra: cria os algoritmos que iremos usar
    
    cout << "Digite a base do retângulo: "; // faz uma pergunta ao usuario
    cin >> base; // registra a resposta do usuario como o valor de um algoritmo
    cout << "Digite a altura do retângulo "; // faz uma pergunta ao usuario
    cin >> altura; // registra a resposta do usuario como o valor de um algoritmo
    
    area = base * altura; //usa os valores dados pelo usuario para determinar o valor do algoritmo "area"
    
    cout << "A area do retângulo é: " << area << endl; // mostra a solução do problema ao usuario e termina a linha de código

    return 0;
}