#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

Beer::Beer(int unidades, float ml, string recipiente, double valor) : Liquid(ml, recipiente)
{
    this->unidades = unidades;
}
int Beer::getUnidades()
{
    return (unidades);
};