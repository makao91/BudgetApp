#include "Budget.h"

void Budget::registration()
{
    userMenager.userRegistration();
}
void Budget::logIn()
{
    userMenager.userLogin();
}
bool Budget::isAnyUserLogin()
{
    return userMenager.isAnyUserLogin();
}
void Budget::appendNewExpense()
{

    if (userMenager.isAnyUserLogin())
    {
        expenseMenager = new ExpenseMenager(userMenager.getIdOffLoggedUser());
        expenseMenager->registrationOfNewExpense();
    }
    else
    {
        cout<<"You need to log in first."<<endl;
        system("pause");
    }
}
void Budget::appendNewIncome()
{
    if (userMenager.isAnyUserLogin())
    {
        incomeMenager = new IncomeMenager(userMenager.getIdOffLoggedUser());
        incomeMenager->registrationOfNewIncome();
    }
    else
    {
        cout<<"You need to log in first."<<endl;
        system("pause");
    }
}
void Budget::userLogOut ()
{
    userMenager.userLogOut();
    delete incomeMenager;
    incomeMenager = NULL;
    delete expenseMenager;
    expenseMenager = NULL;
}
void Budget::changeLoggedUsersPassword ()
{
    userMenager.changeLoggedUsersPassword();
}
void Budget::showBalanceOfCurrentMonth()
{
    balance = new Balance(userMenager.getIdOffLoggedUser());
    balance->balanceCurrentMonth();
}
void Budget::showBalanceOfPreviousMonth()
{
    balance = new Balance(userMenager.getIdOffLoggedUser());
    balance->balanceOfPreviousMonth();
}
void Budget::showBalanceOfSpecificTimePeriod()
{
    balance = new Balance(userMenager.getIdOffLoggedUser());
    balance->balanceOfTimePeriod();
}
