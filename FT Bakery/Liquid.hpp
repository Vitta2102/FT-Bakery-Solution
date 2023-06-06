#include <string>
#include "Comida.hpp"

using namespace std;

class Liquid : public Food
{
    protected:
    float ml;
    string recipiente;

    public:
    Liquid(float ml, string recipiente);
};