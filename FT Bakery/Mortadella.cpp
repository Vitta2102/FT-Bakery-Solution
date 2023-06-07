#include <string>
#include "Food.hpp"
#include "Mortadella.h"

using namespace std;

Mortadella::Mortadella(string tipo, float peso, double valor) : Food(valor)
{
	this->tipo = tipo;
	this->peso = peso;
};

string Mortadella::getDescricao()
{
	return ("Mortadella " + tipo + " - " + to_string(peso) + " Kg.");
};