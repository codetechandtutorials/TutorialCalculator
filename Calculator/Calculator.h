// Class for handling our 4 options for calculating.
class Calculator
{
public:
    Calculator();

    void run();

private:
    float firstNumber, secondNumber;

    void getEntries();

    enum CHOICE
    {
        INVALID = 0,
        ADD,
        SUBTRACT,
        MULTIPLY,
        DIVIDE
    } _choice;
};