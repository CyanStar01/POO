#include <iostream>
using namespace std;

int main() { // chave principal onde nosso codigo vai ser escrito
    float cateto1, cateto2, area; // float palavra: cria as variaveis que iremos usar
    
    cout << "Digite o valor do cateto 1: "; // faz uma pergunta ao usuario
    cin >> cateto1; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite o valor do cateto 2 "; // faz uma pergunta ao usuario
    cin >> cateto2; // registra a resposta do usuario como o valor de uma variavel
    
    area = (cateto1 * cateto2) / 2; //usa os valores dados pelo usuario para determinar o valor da variavel "area"
    
    cout << "A area do retangulo eh: " << area << endl; // mostra a solucao do problema ao usuario e termina a linha de codigo

    return 0;
}
