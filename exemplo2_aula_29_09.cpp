#include <iostream>

using namespace std;

class Calculadora {
public:

    static double Adicao(double a, double b) {
        return a + b;
    }

    static double Subtracao(double a, double b) {
        return a - b;
    }

    static double Multiplicacao(double a, double b) {
        return a * b;
    }

    static double Divisao(double a, double b) {
        if (b != 0) {
            return a / b;
        } else {
            cout << "Não é possível dividir por zero." << endl;
            return 0;
        }
    }
};

int main() {
    double numero1, numero2, resultado = 0;
    char operacao;

    cout << "Digite o primeiro número: ";
    cin >> numero1;

    cout << "Digite a operação (+, -, *, /): ";
    cin >> operacao;

    cout << "Digite o segundo número: ";
    cin >> numero2;


    switch (operacao) {
        case '+':
            resultado = Calculadora::Adicao(numero1, numero2);
            break;
        case '-':
            resultado = Calculadora::Subtracao(numero1, numero2);
            break;
        case '*':
            resultado = Calculadora::Multiplicacao(numero1, numero2);
            break;
        case '/':
            resultado = Calculadora::Divisao(numero1, numero2);
            break;
        default:
            cout << "Operação inválida!" << endl;
            break;
    }

    cout << "O resultado é: " << resultado << endl<<endl;

    return 0;
}
