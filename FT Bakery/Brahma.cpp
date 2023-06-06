#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Brahma.hpp"

using namespace std;

Brahma::Brahma(float teorAlcoolico, int unidades, float ml, string recipiente, double valor) : Beer(unidades, ml, recipiente, valor)
{
    this->teorAlcoolico = teorAlcoolico;
};

string Brahma::getDescricao()
{
    return("Brahma "+recipiente+" "+to_string(ml)+"ml"+" - "+to_string(unidades)+" unidades "+to_string(teorAlcoolico)+"% de alcool");
};