#include <string>
#include "Comida.hpp"
#include "Liquid.hpp"

using namespace std;

class Beer : public Liquid 
{
    protected: 
    int unidades;

    public:
    Beer(int unidade, float ml, string recipiente, double valor);
    virtual int getUnidades();
};