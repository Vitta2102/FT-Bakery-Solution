#include <string>
#include "Comida.hpp"

using namespace std;

class Liquid : public Food
{
    protected:
    int ml;
    string recipiente;

    public:
    Liquid(int ml, string recipiente);
    virtual string getDescricao() = 0;
};