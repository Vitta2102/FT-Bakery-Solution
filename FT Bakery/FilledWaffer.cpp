/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "Cracker.hpp"
#include "FilledWaffer.hpp"

using namespace std;

FilledWaffer::FilledWaffer(string tipo, string recheio, int unidades, double valor) : Cracker(tipo, unidades, valor)
   {
   this->recheio = recheio;
   };
   
string FilledWaffer::getDescricao()
   { 
   return ("Waffer Filled with " + recheio + " - " + Cracker::getDescricao()); 
   };
   
/* fim de arquivo */