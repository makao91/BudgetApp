#include "ExpenseMenager.h"

void ExpenseMenager::registrationOfNewExpense()
{
    system("cls");
    Expense singleExpense = addMoneyOccurence();
    expenses.push_back(singleExpense);
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
    cout<<"What did you spend the money on? (text-text-text)"<<endl;
    cin.sync();
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
vector <Expense> ExpenseMenager::getExpenseData()
{
    return expenses;
}
