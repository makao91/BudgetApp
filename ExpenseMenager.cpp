#include "ExpenseMenager.h"


void ExpenseMenager::registrationOfNewExpense()
{
    system("cls");
    Expense singleExpense = addMoneyOccurence();

    expenses.push_back(singleExpense);
    //cout<<singleExpense.getExpenseId()<<endl<<singleExpense.getItem()<<endl;
    system("pause");

    fileWithExpenses.appendExpenseToFile(singleExpense);

    cout << endl << "Registration was successful" << endl << endl;
    system("pause");

}
Expense ExpenseMenager::addMoneyOccurence ()
{

    Expense singleExpense;
    singleExpense.setUserId(idLoggedUser);
    singleExpense.setExpenseId(getIdForNewExpense());
    singleExpense.setDate(writeYourDate());
    cout<<"What did you spend the money on?"<<endl;
    UsefullMethods::loadLines();
    singleExpense.setItem(UsefullMethods::loadLines());
    cout<<"How much did it cost?"<<endl;
    singleExpense.setAmount(UsefullMethods::loadFloat());
    return singleExpense;
}
int ExpenseMenager::getIdForNewExpense()
{
    if (expenses.empty() == true)
        return 1;
    else
        return expenses.back().getExpenseId() + 1;
}
