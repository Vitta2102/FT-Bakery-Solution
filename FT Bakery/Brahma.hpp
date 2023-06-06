#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Brahma : public Beer
{   
    protected:
    float teorAlcoolico;

    public:
    Brahma(float teorAlcoolico, int unidades, float ml, string recipiente, double valor);
    virtual string getDescricao();
};