#include "Balance.h"

void Balance::balanceCurrentMonth()
{
    int integerMonth = 0;
    int integerYear = 0;
    int counter = 1;
    float summIncomes = 0;
    float summExpenses = 0;

    sort (expenses.begin(), expenses.end(), sortByDateExpenses);
    sort (incomes.begin(), incomes.end(), sortByDateIncomes);
    cout<<"==========================="<<endl;
    cout<<"INCOMES FROM CURRENT MONTH:"<<endl;
    cout<<"==========================="<<endl;
    for (int i=0; i<incomes.size(); i++)
    {
        if(incomes[i].getUserId()==IncomeMenager::idLoggedUser )
        {
            integerMonth = getMonthFromDateString(incomes[i].getDate());
            integerYear = getYearFromDateString(incomes[i].getDate());

            if((integerMonth == DateOperations::giveMeCurrentMonth()) && (integerYear == DateOperations::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<incomes[i].getDate()<<endl<<incomes[i].getItem()<<" - "<<incomes[i].getAmount()<<" zl"<<endl;
                counter++;
                summIncomes += incomes[i].getAmount();
            }
        }
        integerMonth = 0;
        integerYear = 0;
    }
    cout<<endl;
    cout<<"============================"<<endl;
    cout<<"EXPENSES FROM CURRENT MONTH:"<<endl;
    cout<<"============================"<<endl;
    counter = 1;

    for (int j=0; j<=expenses.size(); j++)
    {
        if(expenses[j].getUserId()==ExpenseMenager::idLoggedUser )
        {
            integerMonth = getMonthFromDateString(expenses[j].getDate());
            integerYear = getYearFromDateString(expenses[j].getDate());

            if((integerMonth == DateOperations::giveMeCurrentMonth()) && (integerYear == DateOperations::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<expenses[j].getDate()<<endl<<expenses[j].getItem()<<" - "<<expenses[j].getAmount()<<" zl"<<endl;
                counter++;
                summExpenses += expenses[j].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"========"<<endl;
    cout<<"SUMMARY:"<<endl;
    cout<<"========"<<endl;
    cout<<"Sum of revenues: "<<summIncomes<<" zl"<<endl;
    cout<<"Total expenditures: "<<summExpenses<<" zl"<<endl;
    cout<<"Total balance: "<<summIncomes - summExpenses<<" zl"<<endl<<endl;

    system("pause");
}
void Balance::balanceOfPreviousMonth()
{
    int integerMonth = 0;
    int integerYear = 0;
    int counter = 1;
    float summIncomes = 0;
    float summExpenses = 0;

    sort (expenses.begin(), expenses.end(), sortByDateExpenses);
    sort (incomes.begin(), incomes.end(), sortByDateIncomes);

    cout<<"============================"<<endl;
    cout<<"INCOMES FROM PREVIOUS MONTH:"<<endl;
    cout<<"============================"<<endl;
    for (int i=0; i<incomes.size(); i++)
    {
        if(incomes[i].getUserId()==IncomeMenager::idLoggedUser )
        {
            integerMonth = getMonthFromDateString(incomes[i].getDate());
            integerYear = getYearFromDateString(incomes[i].getDate());

            if((integerMonth == (DateOperations::giveMeCurrentMonth()-1)) && (integerYear == DateOperations::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<incomes[i].getDate()<<endl<<incomes[i].getItem()<<" - "<<incomes[i].getAmount()<<" zl"<<endl;
                counter++;
                summIncomes += incomes[i].getAmount();
            }
        }
        integerMonth = 0;
        integerYear = 0;
    }
    cout<<endl;
    cout<<"============================="<<endl;
    cout<<"EXPENSES FROM PREVIOUS MONTH:"<<endl;
    cout<<"============================="<<endl;
    counter = 1;

    for (int j=0; j<=expenses.size(); j++)
    {
        if(expenses[j].getUserId()==ExpenseMenager::idLoggedUser )
        {
            integerMonth = getMonthFromDateString(expenses[j].getDate());
            integerYear = getYearFromDateString(expenses[j].getDate());

            if((integerMonth == (DateOperations::giveMeCurrentMonth()-1)) && (integerYear == DateOperations::giveMeCurrentYear()))
            {
                cout<<counter<<". "<<endl<<"Date: "<<expenses[j].getDate()<<endl<<expenses[j].getItem()<<" - "<<expenses[j].getAmount()<<" zl"<<endl;
                counter++;
                summExpenses += expenses[j].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"========"<<endl;
    cout<<"SUMMARY:"<<endl;
    cout<<"========"<<endl;
    cout<<"Sum of revenues: "<<summIncomes<<" zl"<<endl;
    cout<<"Total expenditures: "<<summExpenses<<" zl"<<endl;
    cout<<"Total balance: "<<summIncomes - summExpenses<<" zl"<<endl<<endl;

    system("pause");
}
int Balance::getYearFromDateString(string date)
{
    int year = 0;
    string temporaryYear = "";

    temporaryYear = date[0];
    temporaryYear += date[1];
    temporaryYear += date[2];
    temporaryYear += date[3];

    year = UsefullMethods::conversionStringToInt(temporaryYear);

    return year;
}

int Balance::getMonthFromDateString(string date)
{
    int month = 0;
    string temporaryMonth = "";

    temporaryMonth = date[5];
    temporaryMonth += date[6];

    month = UsefullMethods::conversionStringToInt(temporaryMonth);

    return month;
}
int Balance::getDayFromDateString(string date)
{
    int day = 0;
    string temporaryDay = "";

    temporaryDay = date[8];
    temporaryDay += date[9];

    day = UsefullMethods::conversionStringToInt(temporaryDay);
    return day;
}
void Balance::balanceOfTimePeriod()
{
    int integerDay = 0;
    int integerMonth = 0;
    int integerYear = 0;
    int counter = 1;
    float summIncomes = 0;
    float summExpenses = 0;
    string startTimePeriod = "";
    string finishTimePeriod = "";
    int integerDayFromStartTimePeriod = 0;
    int integerMonthFromStartTimePeriod = 0;
    int integerYearFromStartTimePeriod = 0;
    int integerDayFromEndTimePeriod = 0;
    int integerMonthFromEndTimePeriod = 0;
    int integerYearFromEndTimePeriod = 0;

    sort (expenses.begin(), expenses.end(), sortByDateExpenses);
    sort (incomes.begin(), incomes.end(), sortByDateIncomes);

cout<<"Which time period do you want to see?"<<endl<<endl<<"Write your starting date (yyyy-mm-dd)."<<endl;
cin>>startTimePeriod;
cout<<"Write your end date (yyyy-mm)."<<endl;
cin>>finishTimePeriod;

startTimePeriod = DateOperations::changeDateToDateWithoutDashes(startTimePeriod);
finishTimePeriod = DateOperations::changeDateToDateWithoutDashes(finishTimePeriod);

integerDayFromStartTimePeriod = getDayFromDateString(startTimePeriod);
integerMonthFromStartTimePeriod = getMonthFromDateString(startTimePeriod);
integerYearFromStartTimePeriod = getYearFromDateString(startTimePeriod);
integerDayFromEndTimePeriod = getDayFromDateString(finishTimePeriod);
integerMonthFromEndTimePeriod = getMonthFromDateString(finishTimePeriod);
integerYearFromEndTimePeriod = getYearFromDateString(finishTimePeriod);

    cout<<"========"<<endl;
    cout<<"INCOMES:"<<endl;
    cout<<"========"<<endl;
    for (int i=0; i<incomes.size(); i++)
    {
        if(incomes[i].getUserId()==IncomeMenager::idLoggedUser )
        {
            integerDay = getDayFromDateString(incomes[i].getDate());
            integerMonth = getMonthFromDateString(incomes[i].getDate());
            integerYear = getYearFromDateString(incomes[i].getDate());

            if((integerYearFromStartTimePeriod<=integerYear) && (integerYear<=integerYearFromEndTimePeriod) && (integerMonthFromStartTimePeriod<=integerMonth) && (integerMonth<=integerMonthFromEndTimePeriod) && (integerDayFromStartTimePeriod<=integerDay) && (integerDay<=integerDayFromEndTimePeriod))
            {
                cout<<counter<<". "<<endl<<"Date: "<<incomes[i].getDate()<<endl<<incomes[i].getItem()<<" - "<<incomes[i].getAmount()<<" zl"<<endl;
                counter++;
                summIncomes += incomes[i].getAmount();
            }
        }
        integerDay = 0;
        integerMonth = 0;
        integerYear = 0;
    }
    cout<<endl;
    cout<<"========="<<endl;
    cout<<"EXPENSES:"<<endl;
    cout<<"========="<<endl;
    counter = 1;

    for (int j=0; j<=expenses.size(); j++)
    {
        if(expenses[j].getUserId()==ExpenseMenager::idLoggedUser )
        {
            integerDay = getDayFromDateString(expenses[j].getDate());
            integerMonth = getMonthFromDateString(expenses[j].getDate());
            integerYear = getYearFromDateString(expenses[j].getDate());

            if((integerYearFromStartTimePeriod<=integerYear) && (integerYear<=integerYearFromEndTimePeriod) && (integerMonthFromStartTimePeriod<=integerMonth) && (integerMonth<=integerMonthFromEndTimePeriod) && (integerDayFromStartTimePeriod<=integerDay) && (integerDay<=integerDayFromEndTimePeriod))
            {
                cout<<counter<<". "<<endl<<"Date: "<<expenses[j].getDate()<<endl<<expenses[j].getItem()<<" - "<<expenses[j].getAmount()<<" zl"<<endl;
                counter++;
                summExpenses += expenses[j].getAmount();
            }
        }
    }
    cout<<endl;
    cout<<"========"<<endl;
    cout<<"SUMMARY:"<<endl;
    cout<<"========"<<endl;
    cout<<"Sum of revenues: "<<summIncomes<<" zl"<<endl;
    cout<<"Total expenditures: "<<summExpenses<<" zl"<<endl;
    cout<<"Total balance: "<<summIncomes - summExpenses<<" zl"<<endl<<endl;

    system("pause");
}

bool Balance::sortByDateExpenses (Expense left, Expense right)
{
    return UsefullMethods::conversionStringToInt(left.getDate()) < UsefullMethods::conversionStringToInt(right.getDate());
}
 bool Balance::sortByDateIncomes (Income left, Income right)
{
    return UsefullMethods::conversionStringToInt(left.getDate()) < UsefullMethods::conversionStringToInt(right.getDate());
}
