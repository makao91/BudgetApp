#include "IncomeMenager.h"

void IncomeMenager::registrationOfNewIncome()
{
    system("cls");
    Income singleIncome = addMoneyOccurence();
    incomes.push_back(singleIncome);
    fileWithIncomes.appendIncomeToFile(singleIncome);
    cout << endl << "Registration was successful" << endl << endl;
    system("pause");
}
Income IncomeMenager::addMoneyOccurence ()
{
    Income singleIncome;
    singleIncome.setUserId(idLoggedUser);
    singleIncome.setIncomeId(getIdForNewIncome());
    singleIncome.setDate(writeYourDate());
    cout<<"Income came from: (text-text-text)"<<endl;
    cin.sync();
    singleIncome.setItem(UsefullMethods::loadLines());
    cout<<"How much did you earn?"<<endl;
    singleIncome.setAmount(UsefullMethods::loadFloat());
    return singleIncome;
}
int IncomeMenager::getIdForNewIncome()
{
    if (incomes.empty())
        return 1;
    else
        return incomes.back().getIncomeId() + 1;
}
vector <Income> IncomeMenager::getIncomeData()
{
    return incomes;
}
