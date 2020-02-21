#include "Balance.h"

void Balance::balanceCurrentMonth()
{
    string temporaryDate = "";
    string temporaryMonth = "";
    string temporaryYear = "";
    int integerMonth = 0;
    int integerYear = 0;
    int counter = 1;
    float summIncomes = 0;
    float summExpenses = 0;


    cout<<"Incomes from current month:"<<endl;
    for (int i=0; i<incomes.size(); i++)
    {
        if(incomes[i].getUserId()==IncomeMenager::idLoggedUser )
        {
            temporaryDate = incomes[i].getDate();
            temporaryYear = temporaryDate[0];
            temporaryYear += temporaryDate[1];
            temporaryYear += temporaryDate[2];
            temporaryYear += temporaryDate[3];
            temporaryMonth = temporaryDate[4];
            temporaryMonth += temporaryDate[5];
            integerMonth = UsefullMethods::conversionStringToInt(temporaryMonth);
            integerYear = UsefullMethods::conversionStringToInt(temporaryYear);

            if((integerMonth == UsefullMethods::giveMeCurrentMonth()) && (integerYear == UsefullMethods::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<UsefullMethods::changeDateToDateDividedWithDashes(incomes[i].getDate())<<endl<<incomes[i].getItem()<<" - "<<incomes[i].getAmount()<<" zl"<<endl;
                counter++;
                summIncomes += incomes[i].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"Expenses from current month:"<<endl;
    counter = 1;
    temporaryDate = "";
    temporaryMonth = "";
    temporaryYear = "";
    integerMonth = 0;
    for (int j=0; j<=expenses.size(); j++)
    {
        if(expenses[j].getUserId()==ExpenseMenager::idLoggedUser )
        {
            temporaryDate = expenses[j].getDate();
            temporaryYear = temporaryDate[0];
            temporaryYear += temporaryDate[1];
            temporaryYear += temporaryDate[2];
            temporaryYear += temporaryDate[3];
            temporaryMonth = temporaryDate[4];
            temporaryMonth += temporaryDate[5];
            integerMonth = UsefullMethods::conversionStringToInt(temporaryMonth);
            integerYear = UsefullMethods::conversionStringToInt(temporaryYear);
            //cout<<integerMonth<<endl<<UsefullMethods::giveMeCurrentMonth();
             if((integerMonth == UsefullMethods::giveMeCurrentMonth()) && (integerYear == UsefullMethods::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<UsefullMethods::changeDateToDateDividedWithDashes(expenses[j].getDate())<<endl<<expenses[j].getItem()<<" - "<<expenses[j].getAmount()<<" zl"<<endl;
                counter++;
                summExpenses += expenses[j].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"Sum of revenues: "<<summIncomes<<" zl"<<endl;
    cout<<"Total expenditures: "<<summExpenses<<" zl"<<endl;
    cout<<"Total balance: "<<summIncomes - summExpenses<<" zl"<<endl;

    system("pause");
}
void Balance::balanceOfPreviousMonth()
{
    string temporaryDate = "";
    string temporaryMonth = "";
    string temporaryYear = "";
    int integerMonth = 0;
    int integerYear = 0;
    int counter = 1;
    float summIncomes = 0;
    float summExpenses = 0;


    cout<<"Incomes from current month:"<<endl;
    for (int i=0; i<incomes.size(); i++)
    {
        if(incomes[i].getUserId()==IncomeMenager::idLoggedUser )
        {
             temporaryDate = incomes[i].getDate();
            temporaryYear = temporaryDate[0];
            temporaryYear += temporaryDate[1];
            temporaryYear += temporaryDate[2];
            temporaryYear += temporaryDate[3];
            temporaryMonth = temporaryDate[4];
            temporaryMonth += temporaryDate[5];
            integerMonth = UsefullMethods::conversionStringToInt(temporaryMonth);
            integerYear = UsefullMethods::conversionStringToInt(temporaryYear);

            if((integerMonth == UsefullMethods::giveMeCurrentMonth()) && (integerYear == UsefullMethods::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<UsefullMethods::changeDateToDateDividedWithDashes(incomes[i].getDate())<<endl<<incomes[i].getItem()<<" - "<<incomes[i].getAmount()<<" zl"<<endl;
                counter++;
                summIncomes += incomes[i].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"Expenses from current month:"<<endl;
    counter = 1;
    temporaryDate = "";
    temporaryMonth = "";
    temporaryYear = "";
    integerMonth = 0;
    for (int j=0; j<=expenses.size(); j++)
    {
        if(expenses[j].getUserId()==ExpenseMenager::idLoggedUser )
        {
            temporaryDate = expenses[j].getDate();
            temporaryYear = temporaryDate[0];
            temporaryYear += temporaryDate[1];
            temporaryYear += temporaryDate[2];
            temporaryYear += temporaryDate[3];
            temporaryMonth = temporaryDate[4];
            temporaryMonth += temporaryDate[5];
            integerMonth = UsefullMethods::conversionStringToInt(temporaryMonth);
            integerYear = UsefullMethods::conversionStringToInt(temporaryYear);
            //cout<<integerMonth<<endl<<UsefullMethods::giveMeCurrentMonth();
            if((integerMonth == UsefullMethods::giveMeCurrentMonth()) && (integerYear == UsefullMethods::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<UsefullMethods::changeDateToDateDividedWithDashes(expenses[j].getDate())<<endl<<expenses[j].getItem()<<" - "<<expenses[j].getAmount()<<" zl"<<endl;
                counter++;
                summExpenses += expenses[j].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"Sum of revenues: "<<summIncomes<<" zl"<<endl;
    cout<<"Total expenditures: "<<summExpenses<<" zl"<<endl;
    cout<<"Total balance: "<<summIncomes - summExpenses<<" zl"<<endl;

    system("pause");
}
