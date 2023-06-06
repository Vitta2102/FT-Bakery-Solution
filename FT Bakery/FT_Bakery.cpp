// FT Bakery.cpp: define o ponto de entrada para o aplicativo.
//

#include "MyProgram.hpp"
#include "a02ex01_a.hpp"
#include "FT_Bakery.h"

using namespace std;

int main(int argc, char* argv[]) {

    void verifyArguments(int argc, char* argv[]);

    MyProgram* program = new MyProgram();

    program->setVerboseMode(new MyBooleanClass(false));
    program->setShortMessageMode(new MyBooleanClass(false));
    program->start(argc, argv);

    delete program;
    return 0;
}

void MyProgram::verifyArguments(int argc, char* argv[])
{
    if (verboseMode) { delete verboseMode; };
    if (shortMessageMode) { delete shortMessageMode; };

    verboseMode = NULL;
    shortMessageMode = NULL;

    for (int count = 1; count < argc; count++)
    {
        if (string(argv[count]) == "-v") { verboseMode = new MyBooleanClass(true); };
        if (string(argv[count]) == "-s") { shortMessageMode = new MyBooleanClass(true); };
    };

    if (!verboseMode) { verboseMode = new MyBooleanClass(); };  // default is false
    if (!shortMessageMode) { shortMessageMode = new MyBooleanClass(); };  // default is false
}
