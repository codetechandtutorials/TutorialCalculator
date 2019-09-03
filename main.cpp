#include <iostream>
#include "Calculator/Calculator.h"
#include "Helpers/helpers.h"

// episode 11: makefiles
int main()
{
    Calculator calc;
    bool isRunning = true;
    while (isRunning)
    {
        calc.run();
        isRunning = checkIfUserWantsToContinue();
    }
    return 0;
}
