#include <iostream>
#include <cmath>
using namespace std;

void areaCirculo() {
    double raio;
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    cout << "Área do círculo: " << M_PI * pow(raio, 2) << endl;
}

void perimetroRetangulo() {
    double largura, altura;
    cout << "Digite a largura e a altura do retângulo: ";
    cin >> largura >> altura;
    cout << "Perímetro do retângulo: " << 2 * (largura + altura) << endl;
}

void teoremaPitagoras() {
    double cateto1, cateto2;
    cout << "Digite os dois catetos: ";
    cin >> cateto1 >> cateto2;
    cout << "Hipotenusa: " << sqrt(pow(cateto1, 2) + pow(cateto2, 2)) << endl;
}

void energiaCinetica() {
    double massa, velocidade;
    cout << "Digite a massa do corpo (kg): ";
    cin >> massa;
    cout << "Digite a velocidade do corpo (m/s): ";
    cin >> velocidade;
    cout << "Energia cinética: " << 0.5 * massa * pow(velocidade, 2) << " J" << endl;
}

void equacaoQuadratica() {
    double a, b, c, delta;
    cout << "Digite os coeficientes a, b e c da equação quadrática (ax^2 + bx + c = 0): ";
    cin >> a >> b >> c;
    delta = pow(b, 2) - 4 * a * c;

    if (delta < 0) {
        cout << "A equação não possui raízes reais." << endl;
    } else {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "As raízes são: x1 = " << x1 << ", x2 = " << x2 << endl;
    }
}

int main() {
    int opcao;

    do {
        cout << "\nCalculadora de Fórmulas\n";
        cout << "1. Área do círculo\n";
        cout << "2. Perímetro do retângulo\n";
        cout << "3. Teorema de Pitágoras\n";
        cout << "4. Energia cinética\n";
        cout << "5. Equação quadrática\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1: areaCirculo(); break;
            case 2: perimetroRetangulo(); break;
            case 3: teoremaPitagoras(); break;
            case 4: energiaCinetica(); break;
            case 5: equacaoQuadratica(); break;
            case 0: cout << "Saindo...\n"; break;
            default: cout << "Opção inválida!\n"; break;
        }
    } while (opcao != 0);

    return 0;
}
