/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <vector>
#include "Comida.hpp"
#include "a02ex01_a.hpp"

using namespace std;

#ifndef A02EX03_H
   #define A02EX03_H

class MyProgram 
	{
	protected:

		std::vector<Food*> myMainList;
		MyBooleanClass* verboseMode;
		MyBooleanClass* shortMessageMode;

	   void process(void);
	   void verifyArguments(int, char* []);
	   void clearAll(void);
   
	   void listItems(void);
	   void insertItems(void);
	   void insertBread(void);
	   void insertCheese(void);
	   void insertCottageCheese(void);
	   void insertHam(void);
	   void insertMortadella(void);
	   void insertCracker(void);
	   void insertFilledWafer(void);

	public:

		MyProgram();
		~MyProgram();

		void start(int argc, char* argv[]);

		void setVerboseMode(MyBooleanClass* value) { verboseMode = value; }
		MyBooleanClass* getVerboseMode() const { return verboseMode; }
		void setShortMessageMode(MyBooleanClass* value) { shortMessageMode = value; }
		MyBooleanClass* getShortMessageMode() const { return shortMessageMode; }
		
   
};
   
#endif

/* fim de arquivo */
