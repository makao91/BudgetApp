#ifndef BALANCE_H
#define BALANCE_H

#include <iostream>
#include <algorithm>
#include "IncomeMenager.h"
#include "ExpenseMenager.h"
#include "DateOperations.h"

using namespace std;

class Balance:  public ExpenseMenager, public IncomeMenager
{
    int getDayFromDateString(string date);
    int getYearFromDateString (string date);
    int getMonthFromDateString (string date);
    static bool sortByDateExpenses (Expense left, Expense right);
    static bool sortByDateIncomes (Income left, Income right);

public:
    Balance(int idLogUser):ExpenseMenager(idLogUser), IncomeMenager(idLogUser){};
    void balanceCurrentMonth();
    void balanceOfPreviousMonth();
    void balanceOfTimePeriod();
};
#endif
