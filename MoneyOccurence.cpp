#include "MoneyOccurence.h"

string MoneyOccurence::writeYourDate()
{
    string year,month,day,date;
    int numberOfSingleData = 1;
    string singleData="";
    string properStringDate="";
    char choosenOne;

    cout<<"Is it from today? (y/n)"<<endl;
    choosenOne = getch();
    if(choosenOne == 'y')
    {
        properStringDate = DateOperations::giveMeCurrentDate();
        properStringDate = DateOperations::changeDateToDateDividedWithDashes(properStringDate);
        return properStringDate;
    }
    else
    {
        while(true)
        {
            cout << "Write date: yyyy-mm-dd" << endl;
            cin>>date;

            for (int charPosition = 0; charPosition <= date.length(); charPosition++)
            {
                if ((date[charPosition] != '-') && (charPosition != 10))
                {
                    singleData += date[charPosition];
                }
                else
                {
                    switch(numberOfSingleData)
                    {
                    case 1:
                        year = singleData;
                        break;
                    case 2:
                        month = singleData;
                        break;
                    case 3:
                        day = singleData;
                        break;
                    }
                    properStringDate+=singleData;
                    singleData = "";
                    numberOfSingleData++;
                }
            }
            int properYear = UsefullMethods::conversionStringToInt(year);
            int properMonth = UsefullMethods::conversionStringToInt(month);
            int properDay = UsefullMethods::conversionStringToInt(day);

            if((properYear>=2000) && (properYear<=2100) && (properMonth>=1) && (properMonth<=12) && (properDay>=1) && (properDay<=31))
            {
                properStringDate = DateOperations::changeDateToDateDividedWithDashes(properStringDate);
                return properStringDate;
            }
            else
            {
                cout<<"Wrong date. Write again."<<endl;
                properStringDate="";
                numberOfSingleData = 1;
            }
        }
    }
}
