#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class GeradorDeSenha {
public:
    static string GeneratePassword(int length) {
        string senha;
        const string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+-=[]{}|;:,.<>?";

        // Inicialize o gerador de números aleatórios com base no tempo atual
        srand(static_cast<unsigned int>(time(nullptr)));

        for (int i = 0; i < length; ++i) {
            int randomIndex = rand() % charset.length();
            senha += charset[randomIndex];
        }

        return senha;
    }
};

int main() {
    int TamanhoSenha = 10; // Você pode ajustar o comprimento da senha conforme necessário
    string senhaGerada = GeradorDeSenha::GeneratePassword(TamanhoSenha);

    cout << "Senha gerada: " << senhaGerada << endl;

    return 0;
}
