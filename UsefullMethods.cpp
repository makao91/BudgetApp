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
