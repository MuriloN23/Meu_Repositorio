#include <iostream>
#include <string>
#include <vector>

using namespace std;

class MinhaClasse 
{

private:
static int contador;

public:
    MinhaClasse() {
        contador++;
    }

    static int GetContador(){
        return contador;
    }

};

int MinhaClasse::contador=0;

int main() {
    MinhaClasse objeto1;
    MinhaClasse objeto2;
    MinhaClasse objeto3;
    MinhaClasse objeto4;
    
    cout <<"Número de instâncias: "<< MinhaClasse::GetContador()<<endl<<endl;
    return 0;

}