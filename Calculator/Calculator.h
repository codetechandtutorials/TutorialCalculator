// Class for handling our 4 options for calculating.

// overloading operators
/*
Overloadable operators
+    -    *    /    =    <    >    +=   -=   *=   /=   <<   >>
<<=  >>=  ==   !=   <=   >=   ++   --   %    &    ^    !    |
~    &=   ^=   |=   &&   ||   %=   []   ()   ,    ->*  ->   new 
delete    new[]     delete[]
*/
#include <vector>
class Calculator
{
public:
    Calculator();

    void run();

    Calculator& operator<<(Calculator& calc);
private:

    void seePastResults();

    float firstNumber, secondNumber;

    std::vector<float> pastResults;

    void getEntries();

    enum CHOICE
    {
        INVALID = 0,
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE,
        SEE_PAST
    } _choice;
};