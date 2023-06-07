#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Heineken : public Beer 
{
    protected:
    float teorAlcoolico;

    public:
    Heineken(float, float, string, double);
    virtual string getDescricao();    
};