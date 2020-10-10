//============================================================================
// Name        : Standard.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class CanGoWrong {
public:
    CanGoWrong(){
        pMemory = new char[999943092849];
        pMemory[50] = 'y';
    }
    ~CanGoWrong(){
        cout << "Destructor called." << endl;
        delete [] pMemory;
    }
    char getElem(int idx) {
        return pMemory[idx];
    }
private:
    char *pMemory;
};

int main() {
    try {
        CanGoWrong wrong;
        cout << "Memory element: " << wrong.getElem(50) << endl;
    }
    catch(bad_alloc &e) {
        cout << "Memory error: " << e.what() << endl;
    }
    cout << "Executing other stuff..." << endl;
    return 0;
}
