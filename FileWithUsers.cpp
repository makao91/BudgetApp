#include "FileWithUsers.h"

void FileWithUsers::appendUserToFile(User user)
{
    xml.ResetPos();
    xml.FindElem();
    xml.IntoElem();
    xml.AddElem(user.getLogin(),user.getId()) ;
    xml.SetAttrib("Pass", user.getPassword());
    xml.OutOfElem();
    xml.Save("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Users.xml");
}

vector <User> FileWithUsers::loadUsersFromFile()
{
    vector <User> users;
    User user;
    if (xml.Load("C:\\Users\\Marcin\\Desktop\\Obiektówka\\BudgetApp\\Users.xml")==false)
    {
        xml.AddElem("Users");
    }
    else
    {
        xml.ResetPos();
        xml.FindElem("Users");
        xml.IntoElem();
        while (xml.FindElem())
        {
            user.setLogin(xml.GetTagName());
            user.setId(UsefullMethods::conversionStringToInt(xml.GetData()));
            user.setPassword(xml.GetAttrib("Pass"));
           // cout<<"hojhoj"<<endl;
            //system("pause");
            users.push_back(user);
        }

    }

    return users;
}
void saveAllUsersToFile(vector<User>&users)
{
    cout<<"puppa";
}
