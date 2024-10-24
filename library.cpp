#include <iostream>
#include <ctime>  //for dates
#include <fstream> //for file handlin

using namespace std;

//class of book
class Book{
private:
    string name;
    string iban;
    bool issued;
    time_t date_issued;
    time_t date_due;
    string user_issued;

public:
    //default constructor
    Book(){
        name = "";
        iban = "";
        issued = false;
        date_issued = 0;
        date_due = 0;
        user_issued= "";
    }
    //constructor- using function overloading
    Book(string pname,string piban) {
        name = pname;
        iban = piban;
        issued = false;
    }

    //issue book function to update issue status on file and on array
    void issue() {
        if(issued == false)
             issued = true;
        else
            cout << "The book is unavailable for issuance. It will be available after " << date_due << endl;
    }
    //Display info --for debugging--
    
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
    books[1].issue();
    books[1].issue(); 


    //unaiza code
    //using switch case ask 1. Login as user (welcome message a. View issued books b. 
    //2. Login as admin 3. Sign up
    return 0;
}

//unaiza: make validation function for password
