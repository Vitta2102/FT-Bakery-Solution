#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Heineken : public Beer 
{
    protected:
    float teorAlcoolico;

    public:
    Heineken(float teorAlcoolico, int unidades, float ml, string recipiente, double valor);
    virtual string getDescricao();    
};