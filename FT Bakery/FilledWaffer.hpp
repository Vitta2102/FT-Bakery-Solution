/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_E_H
   #define A02EX03_E_H

#include <string>
#include "Cracker.hpp"

using namespace std;

class FilledWaffer : public Cracker
   {
   private:
      string recheio;
      
   public:
      FilledWaffer(string, string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */