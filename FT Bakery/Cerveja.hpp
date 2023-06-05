#include <string>
#include "Comida.hpp"
#include "Liquido.hpp"

using namespace std;

class Cerveja : public Liquido 
{
    private: 
    string tipo;

    public:
    Cerveja(string tipo, int ml, string recipiente, double valor);
    virtual string getDescricao();
};