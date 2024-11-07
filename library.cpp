#include <iostream>
#include <iomanip>

//#include "function.h" //include hash + password validation + 
#include "books.h" // class declaration + import book function + print imported books
#include "users.h"

using namespace std;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


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
    User users[200];
    int input;
    string const bookfile = "books.txt";
    string const userfile = "users.txt";

    //use function import books to import from file
    int book_count = importbooks(bookfile, books);
    //int user_count = importbooks(userfile, users); //add implementation for this

    //unaiza code
    //using switch case ask 1. Login as user (welcome message a. View issued books b. 
    cout<< "1. Print all books"<< endl;
    cout<< "2. Login";
    cout<< "100. Exit library"<< endl;
    cin >> input;

    printbooks(book_count-1, books);

    //2. Login as admin 3. Sign up
    return 0;
}

