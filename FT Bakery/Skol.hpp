#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Skol : public Beer
{   
    protected:
    float teorAlcoolico;

    public:
    Skol(float, float, string, double);
    virtual string getDescricao();
};