#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Budweiser : public Beer
{
    protected:
    float teorAlcoolico;

    public:
    Budweiser(float, float, string, double);
    virtual string getDescricao();
};