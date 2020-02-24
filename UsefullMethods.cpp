#include "UsefullMethods.h"

string UsefullMethods::loadLines()
{
    string inputStream = "";
    cin.clear();
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
    string coma = ",";
    while (true)
    {
        getline(cin, inputStream);
        size_t position = inputStream.find(coma);
        if(position != string::npos)
        {
            inputStream.replace(position,1,".");
        }
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

