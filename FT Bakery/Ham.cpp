#include <string>
#include "Food.hpp"
#include "Ham.h"

using namespace std;

Ham::Ham(string tipo, float peso, double valor) : Food(valor)
{
	this->tipo = tipo;
	this->peso = peso;
};

string Ham::getDescricao()
{
	return ("Ham " + tipo + " - " + to_string(peso) + " Kg.");
};