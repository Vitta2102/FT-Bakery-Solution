#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Skol : public Beer
{   
    protected:
    float teorAlcoolico;

    public:
    Skol(float teorAlcoolico, int unidades, float ml, string recipiente, double valor);
    virtual string getDescricao();
};