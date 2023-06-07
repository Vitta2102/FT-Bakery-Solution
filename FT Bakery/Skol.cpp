#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Skol.hpp"

using namespace std;

Skol::Skol(float teorAlcoolico, float ml, string recipiente, double valor) : Beer(ml, recipiente, valor)
{
    this->teorAlcoolico = teorAlcoolico;
};

string Skol::getDescricao()
{
    return("Skol " + recipiente + " " + to_string(ml) + "ml" + " - " + to_string(teorAlcoolico) + "% de alcool");
};