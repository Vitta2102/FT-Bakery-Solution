#include <string>
#include "Comida.hpp"

using namespace std;

class Liquido : public Food
{
    protected:
    int ml;
    string recipiente;

    public:
    Liquido(int ml, string recipiente);
    virtual string getDescricao() = 0;
};