#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char inputChar;

    // Solicita ao usuário que insira um caractere
    cout << "Digite um caractere: ";
    cin >> inputChar;

    // Imprime o caractere
    cout << "Caractere: " << inputChar << endl;

    // Imprime o código numérico do caractere em decimal
    cout << "Código numérico (decimal): " << static_cast<int>(inputChar) << endl;

    // Imprime o código numérico do caractere em octal
    cout << "Código numérico (octal): " << oct << static_cast<int>(inputChar) << endl;

    // Imprime o código numérico do caractere em hexadecimal
    cout << "Código numérico (hexadecimal): " << hex << static_cast<int>(inputChar) << endl;

    // Exemplo de caracteres especiais
    char cedilha = 'ç';
    char til = 'ã';

    cout << "Exemplo de caractere especial 'ç': " << cedilha << endl;
    cout << "Código numérico (decimal) do 'ç': " << static_cast<int>(cedilha) << endl;

    cout << "Exemplo de caractere especial 'ã': " << til << endl;
    cout << "Código numérico (decimal) do 'ã': " << static_cast<int>(til) << endl;

    return 0;
}


