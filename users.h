#include <iostream>
#include <iomanip>
#include "function.h"

using namespace std;

string const ADMIN = "admin";
string const ADMIN_PASS = "admin123";

class User{

private:
    string username;
    int hashed_password;

public:
    User()
    {
        username = "";
        hashed_password = -100;
    }

    int hash_pass()
    {
        return hashed_password;
    }

    string user_name()
    {
        return username;
    }

    /*User (string name,string password,string filename)
    {
        username = name;
        hashed_password = hash(password);
        int i = 0;
        string line ;
        fstream bookfile;
        bookfile.open(filename,ios::app);
        if(bookfile.is_open()){
            while(!bookfile.eof()) //could use while(getline()) for simplicity
            {    
                getline(bookfile,line);
                int separator = line.find(','); // using csv file so separator is ','
                
                string bname = line.substr(0,separator);
                string iban = line.substr(separator + 1);
                User[i].set_book(bname, iban);
                i++; //importing linearly in array
            }
            
    }
    */
};

bool login(string username,string password, User arr[], int size)
{
    //linear search for password corresponding to username
    for(int i=0; i<=size ; i++)
    {
        if ((arr[i].user_name() == username)&&(arr[i].hash_pass() == hashVal(password)))
        {
            cout << "----------|----------\n" << left << setw(10) << "Welcome" <<right << setw(11) << username;
            cout << "----------|----------\n";
            return true;
        }
    }
    cout << "Username or password invalid";
    return false;
}

