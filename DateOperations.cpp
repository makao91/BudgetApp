#include "DateOperations.h"

int DateOperations::giveMeCurrentMonth ()
{
    int currentMonth;
    time_t t = time(0);
    tm* now = localtime(&t);
    currentMonth=now->tm_mon + 1;
    return currentMonth;
}
int DateOperations::giveMeCurrentYear ()
{
    int currentYear;
    time_t t = time(0);
    tm* now = localtime(&t);
    currentYear=now->tm_year + 1900;
    return currentYear;
}
string DateOperations::giveMeCurrentDate ()
{
    string currentDate = "";
    int currentYear = 0;
    int currentMonth = 0;
    int currentDay = 0;
    string strCurrentYear = "";
    string strCurrentMonth = "";
    string strCurrentDay = "";

    time_t t = time(0);
    tm* now = localtime(&t);
    currentYear =now->tm_year + 1900;
    currentMonth = now->tm_mon + 1;

    currentDay = now->tm_mday;
    strCurrentYear = UsefullMethods::conversionIntForString(currentYear);

    strCurrentMonth = UsefullMethods::conversionIntForString(currentMonth);
    if (currentMonth<10)
    {
        strCurrentMonth.insert(0,"0");
    }
    strCurrentDay = UsefullMethods::conversionIntForString(currentDay);
    if(currentDay<10)
    {
        strCurrentDay.insert(0,"0");
    }
    currentDate += strCurrentYear;
    currentDate += strCurrentMonth;
    currentDate += strCurrentDay;
    return currentDate;
}
string DateOperations::changeDateToDateDividedWithDashes(string dateWitoutDashes)
{
    dateWitoutDashes.insert(4,"-");
    dateWitoutDashes.insert(7,"-");
    return dateWitoutDashes;
}
string DateOperations::changeDateToDateWithoutDashes(string dateWithDashes)
{
    dateWithDashes.erase(4,1);
    return dateWithDashes;
}
