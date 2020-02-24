#ifndef DATEOPERATIONS_H
#define DATEOPERATIONS_H

#include <string>
#include <ctime>
#include "UsefullMethods.h"

using namespace std;

class DateOperations
{
 public:
    static int giveMeCurrentMonth ();
    static string changeDateToDateDividedWithDashes(string dateWithoutDashes);
    static string changeDateToDateWithoutDashes(string dateWithDashes);
    static int giveMeCurrentYear ();
    static string giveMeCurrentDate ();
};
#endif
