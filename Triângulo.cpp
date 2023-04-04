#include <iostream>
using namespace std;

int main() { // chave principal onde nosso codigo vai ser escrito
    float base, altura, area; // float palavra: cria as variaveis que iremos usar
    
    cout << "Digite a base do triangulo: "; // faz uma pergunta ao usuario
    cin >> base; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite a altura do triangulo "; // faz uma pergunta ao usuario
    cin >> altura; // registra a resposta do usuario como o valor de uma variavel
    
    area = (base * altura) / 2; //usa os valores dados pelo usuario para determinar o valor da variavel "area"
    
    cout << "A area do triangulo eh: " << area << endl; // mostra a solucao do problema ao usuario e termina a linha de codigo

    return 0;
}
