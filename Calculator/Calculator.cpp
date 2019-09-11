#include "Calculator.h"
#include <iostream>

Calculator::Calculator()
{
    firstNumber = 0;
    secondNumber = 0;
    _choice = INVALID;
}

void Calculator::run()
{
    _choice = CHOICE::INVALID;
    while (_choice == CHOICE::INVALID)
    {
        int choice = 0;
        std::cout << "press 1 for add, 2 for subtract, 3 for multiply, 4 for divide, 5 to see past results: ";
        std::cin >> choice;
        if (choice > 0 && choice < 6)
        {
            _choice = static_cast<CHOICE>(choice);
        }
        else
        {
            std::cout << "invalid entry of \'" << choice << "\' - try again." << std::endl;
        }
    }

    switch (_choice)
    {
    case ADD:
    {
        std::cout << "add numbers!\n";
        getEntries();
        float result = firstNumber + secondNumber;
        std::cout << "result: " << firstNumber << " + " << secondNumber << " = " << result << std::endl;
        pastResults.push_back(result);
    }
        break;
    case SUBTRACT:
        std::cout << "subtract numbers!\n";
        getEntries();
        std::cout << "result: " << firstNumber << " - " << secondNumber << " = " << firstNumber - secondNumber << std::endl;
        pastResults.push_back(firstNumber - secondNumber);
        break;
    case MULTIPLY:
        std::cout << "multiply numbers!\n";
        getEntries();
        std::cout << "result: " << firstNumber << " * " << secondNumber << " = " << firstNumber * secondNumber << std::endl;
        pastResults.push_back(firstNumber * secondNumber);

        break;
    case DIVIDE:
        std::cout << "divide numbers!\n";
        do
        {
            getEntries();
            if (secondNumber < 0.000000001 && secondNumber > -0.000000001)
            {
                std::cout << "can't divide by 0, try again with second number\n";
            }
        } while (secondNumber < 0.000000001 && secondNumber > -0.000000001);
        std::cout << "result: " << firstNumber << " / " << secondNumber << " = " << firstNumber / secondNumber << std::endl;
        pastResults.push_back(firstNumber / secondNumber);
        break;
    case SEE_PAST:
        std::cout << this;
        break;
    default:
        std::cout << "not a valid choice\n";
    }
}

void Calculator::getEntries()
{
    std::cout << "enter first number: ";
    std::cin >> firstNumber;
    std::cout << "enter second number: ";
    std::cin >> secondNumber;
}

void Calculator::seePastResults()
{
    if (pastResults.empty())
    {
        std::cout << "no results yet\n";
        return;
    }
    for (auto r : pastResults)
    {
        std::cout << r << ", ";
    }
}


Calculator& Calculator::operator<<(Calculator& calc)
{
    if (pastResults.empty())
    {
        std::cout << "no results yet\n";
        return *this;
    }

    for (auto r : pastResults)
    {
        std::cout << r << ", ";
    }

    return *this;

}
