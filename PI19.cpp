#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Itemset
{
private:

public:
    vector<string> itens;

    vector<string> getItens()
    {
        return itens;
    }

    void inserir(string _item)
    {
        itens.push_back(_item);
    }
    void excluir(string _item)
    {
    }
};

int main()
{
    Itemset conjunto;

    conjunto.inserir("Item A");
    conjunto.inserir("Item B");
    conjunto.inserir("Item C");

    for (auto it = conjunto.itens.begin();
         it != conjunto.itens.end();
         it++)
    {
        cout << *it << endl;
    }
}