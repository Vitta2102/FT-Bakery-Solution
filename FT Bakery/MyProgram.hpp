/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

using namespace std;

#ifndef A02EX03_H
   #define A02EX03_H

class MyProgram 
	{
	private:

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

		void start();

		void setVerboseMode(bool value);
		void setShortMessageMode(bool value);
		bool getVerboseMode();
		bool getShortMessageMode();
		
   
};
   
#endif

/* fim de arquivo */
