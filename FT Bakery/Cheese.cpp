#include <string>
#include "Food.hpp"
#include "Cheese.h"

using namespace std;

Cheese::Cheese(string tipo, float peso, double valor) : Food(valor)
{
	this->tipo = tipo;
	this->peso = peso;
};

string Cheese::getDescricao()
{
	return ("Cheese " + tipo + " - " + to_string(peso) + " Kg.");
};
