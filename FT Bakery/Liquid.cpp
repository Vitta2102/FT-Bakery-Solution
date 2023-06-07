#include <string>
#include "Liquid.hpp"
#include "Food.hpp"

using namespace std;

Liquid::Liquid(float ml, string recipiente, double valor) : Food(valor)
{
    this->ml = ml;
    this->recipiente = recipiente;
};