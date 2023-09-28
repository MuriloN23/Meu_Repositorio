#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GeradorDeSenha {
public:
    static string GerarSenha (int length) {
        string senha;
        const string caracter = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";

        // Inicialize o gerador de números aleatórios com base no tempo atual
        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < length; ++i) {
            int sorteio = rand() % caracter.length();
            senha += caracter[sorteio];
        }

        return senha;
    }
};

int main() {
    int TamanhoSenha = 10; // Você pode ajustar o comprimento da senha conforme necessário
    string senhaGerada = GeradorDeSenha::GerarSenha (TamanhoSenha);

    cout << "Senha gerada: " << senhaGerada << endl<<endl;

    return 0;
}
