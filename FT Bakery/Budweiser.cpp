#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Budweiser.hpp"

using namespace std;

Budweiser::Budweiser(float teorAlcoolico, int unidades, float ml, string recipiente, double valor) : Beer(unidades, ml, recipiente, valor)
{
    this->teorAlcoolico = teorAlcoolico;
};

string Budweiser::getDescricao()
{
    return("Budweiser "+recipiente+" "+to_string(ml)+"ml"+ " - "+to_string(unidades)+" unidades "+to_string(teorAlcoolico)+"% de alcool");
};