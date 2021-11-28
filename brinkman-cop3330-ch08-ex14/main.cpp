#include "main.h"

void MultiplyBy2(const double num)
{
    cout << "\n" << num * 2;
}

void DivideBy2(const double num)
{
    cout << "\n" << num / 2;
}

int main()
{
    double number;
    cout << "Please input a number\n";
    cin >> number;
    MultiplyBy2(number);
    DivideBy2(number);
}

// When we declare a const paramter in a function, that means that the value of that variable cannot be changed.

// We might do this in a situation where we might want to use the value of the variable, but have no intention of changing it.

// Const parameters are not often used because, unless there is a direct reference or pointer to a variable, the paramter values will be reset
// when the function is over anyway. So the only reason to use it would be to make sure the function does not change it. However, the programmer
// would normally know not to change it anyway if they were writing the function, so it would be unnecessary unless the source code was used by
// many people.