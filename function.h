#include <iostream>
using namespace std;

int hashVal(string password) // Returns hash value of password //max value will be 9516 given that it is a12. so range is min 3744 given 012.
{
    int hash = 0;
    for (int i =0; i < password.length(); i++)
    {
        hash += password[i]*(i+1);
    }
    return hash;
}


//unaiza: make validation function for password