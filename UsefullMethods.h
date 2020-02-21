#ifndef USEFULLMETHODS_H
#define USEFULLMETHODS_H

#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <ctime>

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
    static float loadFloat();
    static string conversionFloatForString(float number);
    static float conversionStringToFloat(string number);
    static int giveMeCurrentMonth ();
    static string changeDateToDateDividedWithDashes(string dateWitoutDashes);
    static int giveMeCurrentYear ();

};
#endif
