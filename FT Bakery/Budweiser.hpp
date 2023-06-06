#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Budweiser : public Beer
{
    protected:
    float teorAlcoolico;

    public:
    Budweiser(float teorAlcoolico, int unidades, float ml, string recipiente, double valor);
    virtual string getDescricao();
};