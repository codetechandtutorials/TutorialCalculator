#include "helpers.h"
#include <iostream>

bool checkIfUserWantsToContinue()
{
    std::cout << "do another calculation? ('y' to do another): ";
    char answer = 0;
    std::cin >> answer;
    if (answer == 'y')
    {
        return true;
    }
    else
    {
        return false;
    }
}
