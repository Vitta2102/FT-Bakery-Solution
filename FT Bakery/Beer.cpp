#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"

using namespace std;

Beer::Beer(std::string tipo, int ml, std::string recipiente, double valor) : Liquid(ml, recipiente, valor)
{
    this->tipo = tipo;

}
std::string Beer::getDescricao()
{
    return "Beer " + tipo + " - " + recipiente + " " + to_string(ml) + " Ml.";
}