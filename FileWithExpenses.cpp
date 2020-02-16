#include "FileWithExpenses.h"

void FileWithExpenses::appendExpenseToFile(Expense expense)
{
    xml.ResetPos();
    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("ExpenseData");
    xml.IntoElem();
    xml.AddElem("UserId",expense.getUserId());
    xml.AddElem("ExpenseId", expense.getExpenseId());
    xml.AddElem("Date", expense.getDate());
    xml.AddElem(expense.getItem(),UsefullMethods::conversionFloatForString(expense.getAmount()));
    xml.OutOfElem();
    xml.Save("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Expenses.xml");
}

vector <Expense> FileWithExpenses::loadExpensesFromFile()
{
    vector <Expense> expenses;
    Expense singleExpense;
    if (xml.Load("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Expenses.xml")==false)
    {
        xml.AddElem("Expenses");
    }
    else
    {
        xml.ResetPos();
        xml.FindElem("Expenses");
        xml.IntoElem();
        while (xml.FindElem())
        {
            xml.IntoElem();
            xml.FindElem();
            singleExpense.setUserId(UsefullMethods::conversionStringToInt(xml.GetData()));
            xml.FindElem();
            singleExpense.setExpenseId(UsefullMethods::conversionStringToInt(xml.GetData()));
            xml.FindElem();
            singleExpense.setDate(xml.GetData());
            xml.FindElem();
            singleExpense.setItem(xml.GetTagName());
            singleExpense.setAmount(UsefullMethods::conversionStringToFloat(xml.GetData()));
                        cout<<singleExpense.getExpenseId()<<endl<<singleExpense.getUserId()<<endl<<singleExpense.getDate()<<endl<<singleExpense.getItem()<<endl<<singleExpense.getAmount();
                        system("pause");

            expenses.push_back(singleExpense);
        }
    }
    return expenses;
}

