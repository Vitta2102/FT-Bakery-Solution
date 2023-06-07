#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

Beer::Beer(float ml, string recipiente, double valor) : Liquid(ml, recipiente, valor)
{

}
string Beer::getDescricao()
{
    return "Beer " + tipo + " - " + recipiente + " " + to_string(ml) + " Ml.";
}