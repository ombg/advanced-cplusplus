//============================================================================
// Name        : Basic.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

void mightGoWrong() {
	
    bool error1 = false;
    bool error2 = true;

    if(error1) {
        throw "Something went wrong.";
    }
    if(error2) {
        //We don't need to use "new" here. Exception handling cleans up this object.
        throw string("Somestring else went wrong.");
    }

}

void usesMightGoWrong() {
    mightGoWrong();
}

int main() {
    try {
	    usesMightGoWrong();
    }
    catch(int e) {
        cout << "Error code: " << e << endl;
    }
    catch(char const * e) {
        cout << "Error message: " << e << endl;
    }
    catch(string& e) {
        cout << "Error message: " << e << endl;
    }
    cout << "Still running" << endl;

    return 0;
}
