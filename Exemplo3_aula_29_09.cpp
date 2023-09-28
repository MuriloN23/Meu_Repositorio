#include <iostream>
#include <cctype>
#include <string>

using namespace std;

class Senha {
public:
    static bool ValidadorSenha(const string& senha) {
        if (senha.length() < 8, senha.length()>15) {  
            return false;
        }

        bool LetraMaiuscula = false;
        bool LetraMinuscula = false;
        bool Numero = false;
        bool CaracterEspecial = false;

        for (char a : senha) {
            if (isupper(a)) {
                LetraMaiuscula = true;
            } else if (islower(a)) {
                LetraMinuscula = true;
            } else if (isdigit(a)) {
                Numero = true;
            } else {
                // Verifique se o caractere é um caractere especial (não alfanumérico)
                CaracterEspecial = true;
            }
        }

        return LetraMaiuscula && LetraMinuscula && Numero && CaracterEspecial;
    }
};

int main() {
    string senha;
    cout << "Digite uma senha: ";
  cin >> senha;

    if (Senha::ValidadorSenha(senha)) {
        cout << "Senha válida." << endl;
    } else {
        cout << "Senha inválida." << endl;
    }

    return 0;
}
