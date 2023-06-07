#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Heineken.hpp"

using namespace std;

Heineken::Heineken(float teorAlcoolico, float ml, string recipiente, double valor) : Beer(ml, recipiente, valor)
{
    this->teorAlcoolico = teorAlcoolico;
};

string Heineken::getDescricao()
{
    return("Heineken " + recipiente + " " + to_string(ml) + "ml" + " - " + to_string(teorAlcoolico) + "% de alcool");
};