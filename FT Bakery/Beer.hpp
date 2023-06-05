#include <string>
#include "Comida.hpp"
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid 
{
    protected: 
    string tipo;

    public:
    Beer(string tipo, int ml, string recipiente, double valor);
    virtual string getDescricao();
};