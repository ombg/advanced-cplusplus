//============================================================================
// Name        : Custom.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <exception> // Included by iostream
using namespace std;

class MyException : public exception {
public:
    virtual const char* what() const throw() {
        return "This should tell me what exactly went wrong!";
    }
};

class MyClass {
public:
    void goesWrong() {
        throw MyException();
    }
};
int main() {
    try {
        MyClass c;
        c.goesWrong();
    }
    catch(MyException& e) {
        cout << "ERROR: " <<  e.what() << endl;
    }
    cout << "Doing other stuff..." << endl;
    return 0;
}
