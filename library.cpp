#include <iostream>
#include "function.h" //include hash
#include "books.h" // class declaration + import book function

using namespace std;

string const ADMIN = "admin";
string const ADMIN_PASS = "admin123";


//class of book

class user{

private:
    string username;
    string hashed_password;

public:
    void issue(string iban)
    {

    }
};

//another class of users storing user name + password + books issued to them
//have function of issued books
//due books
//create overdue fees function


//function to import books from file
//returns output error if exception error or file empty
//else outputs number of books imported 

//funtion to search for book from imported file


int main()
{
    Book books[200];
    //use function import books to import from file
    importbooks("books.txt", books);

    //unaiza code
    //using switch case ask 1. Login as user (welcome message a. View issued books b. 
    //2. Login as admin 3. Sign up
    return 0;
}

//unaiza: make validation function for password





