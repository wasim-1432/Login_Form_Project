#include<iostream>
#include<fstream>
using namespace std;
class Temp
{
    string Username,Email,Password;
    fstream file;
    public:
        void Login();
        void Sign_Up();
        void Forgot_Password();
}obj;
int main()
{
    char choice;
    cout<<"1-Login"<<endl;
    cout<<"2-Sign up"<<endl;
    cout<<"3-Forgot Password"<<endl;
    cout<<"4-Exit"<<endl;
    cout<<"Enter Your choice"<<endl;
    cin>>choice;
    switch(choice)
    {
        case '1':
            obj.Login();
            break;
        case '2':
            obj.Sign_Up();
            break;
        case '3':
            obj.Forgot_Password();
            break;
        case '4':
            return 0;
            break;
        default:
            cout<<"Invalid Input...!";
    }
    cout<<endl;
    return 0;
}
void Temp::Sign_Up()
{
    cin.ignore();
    cout<<"Enter your Username   ::\n";
    getline(cin,Username);
    cout<<"Enter your Email      ::\n";
    getline(cin,Email);
    cout<<"Enter Your Password   ::\n";
    getline(cin,Password);
    file.open("loginData.txt",ios :: out | ios :: app);
    file<<Username<<"*"<<Email<<"*"<<Password<<endl;
    file.close();
}
void Temp::Login()
{
    string searchname,searchpassword;
    cin.ignore();
    cout<<"-------------------------LOGIN-----------------------\n";
    cout<<"Enter your username\n";
    getline(cin,searchname);
    cout<<"Enter your password\n";
    getline(cin,searchpassword);
    file.open("loginData.txt",ios :: in);
    getline(file,Username,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    while(!file.eof())
    {
        if(Username==searchname)
        {
            if(Password==searchpassword)
            {
                cout<<"Account Login Is Successful...\n";
                cout<<"Username ::"<<Username;
                cout<<"\nEmail  ::"<<Email;
                cout<<"\nPassword  ::"<<Password;
            }
            else
            {
                cout<<"Invalid Password";
            }
        }
        else
        {
            cout<<"Invalid Password or username";
        }
        getline(file,Username,'*');
        getline(file,Email,'*');
        getline(file,Password,'\n');
    }
    file.close();
}
void Temp::Forgot_Password()
{
    string searchName,searchEmail;
    cin.ignore();
    cout<<"----------------------------------Forgot Password-----------------------------------\n";
    cout<<"Enter Your UserName\n";
    getline(cin,searchName);
    cout<<"Enter your Email\n";
    getline(cin,searchEmail);
    file.open("loginData.txt",ios :: in);
    getline(file,Username,'*');
    getline(file,Email,'*');
    getline(file,Password,'\n');
    while(!file.eof())
    {
        if(Username==searchName)
        {
            if(Email==searchEmail)
            {
                cout<<"\nUsername       ::"<<Username;
                cout<<"\nEmail          ::"<<Email;
                cout<<"\nPassword       ::"<<Password;
            }
            else
            {
                cout<<"Invalid Input";
            }
        }
        getline(file,Username,'*');
        getline(file,Email,'*');
        getline(file,Password,'\n');
    }
    file.close();
}