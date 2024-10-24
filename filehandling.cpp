#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream myfile;
    myfile.open("ok.txt",ios::out); //write file
    if (myfile.is_open()){//ensure no error in file handlin
        myfile << "Hello\n";    //write to file
        myfile << "Does this work";
        myfile.close(); //close file
    }

    //myfile.open("ok.txt",ios::app); //append
    string line = "";
    myfile.open("ok.txt",ios::in); //open file for read
    if(myfile.is_open()){
        while( !myfile.eof() ) //while not end of file
        {
            getline(myfile,line);
            cout << line << endl;
        }
        myfile.close();
    }
    return 0;
}