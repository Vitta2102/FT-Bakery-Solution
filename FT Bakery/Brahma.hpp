#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

class Brahma : public Beer
{   
    protected:
    float teorAlcoolico;

    public:
    Brahma(float, float, string, double);
    virtual string getDescricao();
};