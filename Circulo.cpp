#include <iostream> 
using namespace std;

int main() { // chave principal onde nosso codigo vai ser escrito
    float raio, area; // float palavra: cria as variaveis que iremos usar
    const float PI = 3.14159; // cria uma variavel e a atribui um valor
    
    cout << "Digite o raio do circulo: "; // faz uma pergunta ao usuario
    cin >> raio; // registra a resposta do usuario como o valor de uma variavel
    
    area = PI * raio * raio; // usa os valores dados pelo usuario para determinar o valor da variavel "area"
    
    cout << "A area do circulo eh: " << area << endl; // mostra a solucaoo do problema ao usuario e termina a linha de codigo

    return 0;
}
