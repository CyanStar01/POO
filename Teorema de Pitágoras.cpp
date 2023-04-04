#include <iostream>
#include <cmath>
using namespace std;

int main() { // chave principal onde nosso codigo vai ser escrito
    float cateto1, cateto2, hipotenusa; // float palavra: cria as variaveis tipo float que iremos usar
    
    cout << "Digite o comprimento do cateto 1: "; // faz uma pergunta ao usuario
    cin >> cateto1; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite o comprimento do cateto 2 "; // faz uma pergunta ao usuario
    cin >> cateto2; // registra a resposta do usuario como o valor de uma variavel
    
    hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2)); //usa os valores dados pelo usuario para determinar o valor da variavel "hipotenusa"; sqrt = eleva ao quadrado o valor dentro dos colchetes; pow = eleva o primeiro valor pelo segundo valor (ex: pow(3, 3) == 3³.
    
    cout << "O comprimento da hipotenusa eh igual a: " << hipotenusa << endl; // mostra a solucao do problema ao usuario e termina a linha de codigo

    return 0;
}
