#include <string>
#include "Milk.hpp"
#include "Liquid.hpp"

using namespace std;

Milk::Milk(std::string tipo, int ml, std::string recipiente, double valor) : Liquid(ml, recipiente, valor)
{
    this->tipo = tipo;
}

string Milk::getDescricao()
{
    return "Milk " + tipo + " - " + recipiente + " " + to_string(ml) + " Ml.";
}
