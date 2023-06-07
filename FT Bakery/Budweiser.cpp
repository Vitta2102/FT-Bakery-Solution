#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Budweiser.hpp"

using namespace std;

Budweiser::Budweiser(float teorAlcoolico, float ml, string recipiente, double valor) : Beer(ml, recipiente, valor)
{
    this->teorAlcoolico = teorAlcoolico;
};

string Budweiser::getDescricao()
{
    return("Budweiser " + recipiente + " " + to_string(ml) + "ml" + " - " + to_string(teorAlcoolico) + "% de alcool");
};