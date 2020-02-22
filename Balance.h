#ifndef BALANCE_H
#define BALANCE_H

#include <iostream>
#include "IncomeMenager.h"
#include "ExpenseMenager.h"



using namespace std;

class Balance:  public ExpenseMenager, public IncomeMenager
{
    int getYearFromDateString (string date);
    int getMonthFromDateString (string date);



public:
    Balance(int idLogUser):ExpenseMenager(idLogUser), IncomeMenager(idLogUser){};

    void balanceCurrentMonth();
    void balanceOfPreviousMonth();
    void balanceOfTimePeriod();
};
#endif
