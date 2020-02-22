#include "FileWithIncomes.h"

void FileWithIncomes::appendIncomeToFile(Income income)
{
    xml.ResetPos();
    xml.FindElem();
    xml.IntoElem();
    xml.AddElem("IncomeData");
    xml.IntoElem();
    xml.AddElem("UserId",income.getUserId());
    xml.AddElem("IncomeId", income.getIncomeId());
    xml.AddElem("Date", income.getDate());
    xml.AddElem(income.getItem(),UsefullMethods::conversionFloatForString(income.getAmount()));
    xml.OutOfElem();
    xml.Save("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Incomes.xml");
}

vector <Income> FileWithIncomes::loadIncomesFromFile()
{
    vector <Income> incomes;
    Income singleIncome;
    if (xml.Load("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Incomes.xml")==false)
    {
        xml.AddElem("Incomes");
    }
    else
    {
        xml.ResetPos();
        xml.FindElem("Incomes");
        xml.IntoElem();
        while (xml.FindElem())
        {
            xml.IntoElem();
            xml.FindElem();
            singleIncome.setUserId(UsefullMethods::conversionStringToInt(xml.GetData()));
            xml.FindElem();
            singleIncome.setIncomeId(UsefullMethods::conversionStringToInt(xml.GetData()));
            xml.FindElem();
            singleIncome.setDate(xml.GetData());
            xml.FindElem();
            singleIncome.setItem(xml.GetTagName());
            singleIncome.setAmount(UsefullMethods::conversionStringToFloat(xml.GetData()));
                       // cout<<singleIncome.getIncomeId()<<endl<<singleIncome.getUserId()<<endl<<singleIncome.getDate()<<endl<<singleIncome.getItem()<<endl<<singleIncome.getAmount();
                       // system("pause");

            incomes.push_back(singleIncome);
            xml.OutOfElem();
        }
    }
    return incomes;
}
