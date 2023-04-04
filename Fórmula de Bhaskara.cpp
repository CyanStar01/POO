#include <iostream>
#include <cmath>
using namespace std;

int main() { // chave principal onde nosso codigo vai ser escrito
    float a, b, c, x1, x2, delta; // float palavra: cria as variaveis que iremos usar
    
    cout << "Digite o valor de a: "; // faz uma pergunta ao usuario
    cin >> a; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite o valor de b: "; // faz uma pergunta ao usuario
    cin >> b; // registra a resposta do usuario como o valor de uma variavel
    cout << "Digite o valor de c: "; // faz uma pergunta ao usuario
    cin >> c; // registra a resposta do usuario como o valor de uma variavel
    
    delta = pow(b, 2) - 4 * a * c; //usa os valores dados pelo usuario para determinar o valor da variavel "delta"
    
    if (delta >= 0) { // analisa o valor de "delta" e calcula o valor das raizes, caso o valor de delta seja menor que "0" avisa o usuario que a equacao nao possui raizes reais.
    	x1 = (-b + sqrt(delta)) / (2 * a);
    	x2 = (-b - sqrt(delta)) / (2 * a);
    	
    	cout << "As raizes da equacao sao: " << x1 << " e " << x2 << endl;
	} else {
		cout << "A equacao nao tem raizes reais. " << endl;
	}

    return 0;
}
