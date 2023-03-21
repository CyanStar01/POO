#include <iostream> 
using namespace std;

int main() { // chave principal onde nosso código vai ser escrito
    float raio, area; // float palavra: cria os algoritmos que iremos usar
    const float PI = 3.14159; // cria um algoritmo e o atribui um valor
    
    cout << "Digite o raio do circulo: "; // faz uma pergunta ao usuario
    cin >> raio; // registra a resposta do usuario como o valor de um algoritmo
    
    area = PI * raio * raio; // usa os valores dados pelo usuario para determinar o valor do algoritmo "area"
    
    cout << "A area do circulo eh: " << area << endl; // mostra a solução do problema ao usuario e termina a linha de código

    return 0;
}