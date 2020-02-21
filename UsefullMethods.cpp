#include "UsefullMethods.h"

string UsefullMethods::loadLines()
{
    string inputStream = "";
    getline(cin, inputStream);
    return inputStream;
}
string UsefullMethods::conversionIntForString(int number)
{
    ostringstream ss;
    ss << number;
    string str = ss.str();
    return str;
}
string UsefullMethods::changeFirstLetterToCapitalAndRestToLowerCase(string text)
{
    if (!text.empty())
    {
        transform(text.begin(), text.end(), text.begin(), ::tolower);
        text[0] = toupper(text[0]);
    }
    return text;
}
int UsefullMethods::conversionStringToInt(string number)
{
    int numberInt;
    istringstream iss(number);
    iss >> numberInt;

    return numberInt;
}
string UsefullMethods::getNumber(string text, int charPosition)
{
    string number = "";
    while(isdigit(text[charPosition]) == true)
    {
        number += text[charPosition];
        charPosition ++;
    }
    return number;
}
int UsefullMethods::loadInteger()
{
    string inputStream = "";
    int number = 0;

    while (true)
    {
        getline(cin, inputStream);

        stringstream myStream(inputStream);
        if (myStream >> number)
            break;
        cout << "It isn't number. Write again. " << endl;
    }
    return number;
}
float UsefullMethods::loadFloat()
{
    string inputStream = "";
    float moneyNumber = 0;

    while (true)
    {
        getline(cin, inputStream);

        stringstream myStream(inputStream);
        if (myStream >> moneyNumber)
            break;
        cout << "It isn't correct form of number. Write again with dot: like 11.10 " << endl;
    }
    return moneyNumber;
}
char UsefullMethods::loadCharacter()
{
    string inputStream = "";
    char character  = {0};

    while (true)
    {
        getline(cin, inputStream);

        if (inputStream.length() == 1)
        {
            character = inputStream[0];
            break;
        }
        cout << "It isn't character. Write again." << endl;
    }
    return character;
}
string UsefullMethods::conversionFloatForString(float number)
{
    ostringstream ss;
    ss << number;
    string str = ss.str();
    return str;
}
float UsefullMethods::conversionStringToFloat(string number)
{
    float numberInt;
    istringstream iss(number);
    iss >> numberInt;

    return numberInt;
}
int UsefullMethods::giveMeCurrentMonth ()
{
    int currentMonth;
   time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    currentMonth=now->tm_mon + 1;

    return currentMonth;
}
int UsefullMethods::giveMeCurrentYear ()
{
    int currentYear;
   time_t t = time(0);   // get time now
    tm* now = localtime(&t);
    currentYear=now->tm_year + 1900;

    return currentYear;
}
string UsefullMethods::changeDateToDateDividedWithDashes(string dateWitoutDashes)
{
     dateWitoutDashes.insert(4,"-");
     dateWitoutDashes.insert(7,"-");
     return dateWitoutDashes;
}
