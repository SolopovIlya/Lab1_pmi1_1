#include <iostream>
#include "extra.h"

int main(){

    try {
        std::cout << "Hello world!" << std::endl << myPow(-5, -2) << std::endl;

        return 0;
    }
    catch (int errCode) {
        switch (errCode) {
        case -1: 
            std::cout << "Error! Division by zero!\n"; 
            break;
        case -2: 
            std::cout << "Error! Zero to the power of zero is undefined!\n";
            break;
        }

        return errCode;
    }
}
