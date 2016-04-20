#include <iostream>

using namespace std;

int main()
{
    std::cout << "Enter a double value: ";
    double x;
    std::cin >> x;
    std::cout << "Enter a second double value: ";
    double y;
    std::cin >> y;

    std::cout << "Enter one of the following: +, -, *, or /:";
    char z;
    std::cin >> z;

    double w;
    bool validChoice = false;
    if (z == '+')
    {
        w = x+y;
        validChoice = true;
    }
    if (z == '-')
    {
        w = x-y;
        validChoice = true;
    }
    if (z == '*')
    {
        w = x*y;
        validChoice = true;
    }
    if (z == '/')
    {
        w = x/y;
        validChoice = true;
    }

    if (validChoice)
        std::cout << w;

    return 0;
}
