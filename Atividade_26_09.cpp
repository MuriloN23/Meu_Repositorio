#include <iostream>
#include <string>

using namespace std;

class Ave
{
private:
    string especie;
    string voa;
    string tamanho;
    string alimentacao;

public:
    string getEspecie()
    {
        return especie;
    }

    void setEspecie(string _especie)
    {
        especie = _especie;
    }

    string getVoa()
    {
        return voa;
    }

    void setVoa(string _voa)
    {
        voa = _voa;
    }

    string getTamanho()
    {
        return tamanho;
    }

    void setTamanho(string _tamanho)
    {
        tamanho = _tamanho;
    }

    string getAlimentacao()
    {
        return alimentacao;
    }

    void setAlimentacao(string _alimentacao)
    {
        alimentacao = _alimentacao;
    }
};

int main(void)
{
    Ave cobaia;
    string strBuffer;

    cout  << "Digite a espécie da ave: "<< endl;
    getline(cin >> ws, strBuffer);
    cobaia.setEspecie(strBuffer);
    //cout << cobaia.getEspecie() << endl;

 cout  << "O "<<cobaia.getEspecie()<<" voa? " <<endl;
    getline(cin >> ws, strBuffer);
    cobaia.setVoa(strBuffer);
    //cout << cobaia.getVoa() << endl;

    cobaia.setTamanho("Médio");
    cout << cobaia.getTamanho() << endl;

    cobaia.setAlimentacao("Onívoro");
    cout << cobaia.getAlimentacao() << endl<<endl;

    return 0;
}
