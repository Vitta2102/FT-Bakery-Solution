#include <string>
#include "Beer.hpp"
#include "Liquid.hpp"
#include "Brahma.hpp"

using namespace std;

Brahma::Brahma(float teorAlcoolico, float ml, string recipiente, double valor) : Beer(ml, recipiente, valor)
{
    this->teorAlcoolico = teorAlcoolico;
};

string Brahma::getDescricao()
{
    return("Brahma " + recipiente + " " + to_string(ml) + "ml" + " - " + to_string(teorAlcoolico) + "% de alcool");
};