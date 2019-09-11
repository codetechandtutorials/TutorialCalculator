#include <iostream>
#include "Calculator/Calculator.h"
#include "Helpers/helpers.h"

// episode 17: classes - moving forward
int main()
{
    Calculator calc;
    bool isRunning = true;
    while (isRunning)
    {
        calc.run();
        isRunning = checkIfUserWantsToContinue();
    }


    std::cout << &calc;

    return 0;
}
