#include <string>
#include "Soda.hpp"
#include "Liquid.hpp"

using namespace std;

Soda::Soda(string tipo, int ml, string recipiente, double valor) : Liquid(ml, recipiente, valor)
{
    this->tipo = tipo;
}

std::string Soda::getDescricao()
{
    return "Soda " + tipo + " - " + recipiente + " " + to_string(ml) + " Ml.";
}
