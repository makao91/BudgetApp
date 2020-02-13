#ifndef USEFULLMETHODS_H
#define USEFULLMETHODS_H

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class UsefullMethods
{
 public:
    static string loadLines();
    static string conversionIntForString(int number);
    static string changeFirstLetterToCapitalAndRestToLowerCase(string text);
    static int conversionStringToInt(string liczba);
    static string getNumber(string text, int charPosition);
    static int loadInteger();
    static char loadCharacter();

};
#endif
